import javax.swing.*;
import java.awt.*;

public class BounceBall extends JFrame implements Runnable {

    Thread th;
    int x, y, xStep = 5, yStep = 5; //xy Coordinates of the top-left corner of the circle.
    int ballRadius = 50; // radius of the circle
    int panelWidth = 800;
    int panelHeight = 600;

    BallPanel ballPanel; //A JPanel that draws the circle.

    // Inner class to draw the circle
    class BallPanel extends JPanel {
        public BallPanel() {
            this.setBounds(x, y, ballRadius * 2, ballRadius * 2);
        }

        @Override
        protected void paintComponent(Graphics g) { //This method is called automatically whenever repaint() is called.
            super.paintComponent(g);
            g.setColor(Color.RED);
            g.fillOval(0, 0, ballRadius * 2, ballRadius * 2); 
        }
    }

    public BounceBall() {
        this.setTitle("Bounce Circle App");
        this.setSize(panelWidth, panelHeight);
        this.setLayout(null);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        // Start the ball in the center
        x = (panelWidth - ballRadius * 2) / 2;
        y = (panelHeight - ballRadius * 2) / 2;

        ballPanel = new BallPanel();
        this.add(ballPanel);

        th = new Thread(this);
        th.start();

        this.setVisible(true);
    }

    @Override
    public void run() {
        while (true) {
            x += xStep;
            y += yStep;

            // If the ball hits left/right edges, reverse horizontal movement.
            if (x < 0 || x + ballRadius * 2 > panelWidth) {
                xStep *= -1;
            }
			//If the ball hits top/bottom edges, reverse vertical movement.
            if (y < 0 || y + ballRadius * 2 > panelHeight) {
                yStep *= -1;
            }

            ballPanel.setBounds(x, y, ballRadius * 2, ballRadius * 2);
            ballPanel.repaint();

            try {
                Thread.sleep(25); // ~40 FPS
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }

    public static void main(String[] args) {
        new BounceBall();
    }
}
