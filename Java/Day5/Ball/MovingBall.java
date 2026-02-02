import javax.swing.*;
import java.awt.*;
import java.util.Random;

public class MovingBall extends JPanel implements Runnable {
    private int x, y;  //top-left coordinates of the ball.
    private int radius = 30;
    private int dx, dy; //how much the ball moves each frame in X and Y directions.
    private int panelWidth = 600;
    private int panelHeight = 400;
    private Thread th;
    private Random random = new Random();

    public MovingBall() {
        this.setPreferredSize(new Dimension(panelWidth, panelHeight));
        this.setBackground(Color.WHITE);
		 //Generates a random starting position for the ball inside the panel.
		//Subtract radius * 2 to make sure the ball is fully inside the panel.
        x = random.nextInt(panelWidth - radius * 2);
        y = random.nextInt(panelHeight - radius * 2);
		
		//true → move right/down (+5)
		//false → move left/up (-5)
        dx = random.nextBoolean() ? 5 : -5;
        dy = random.nextBoolean() ? 5 : -5;

        th = new Thread(this);
        th.start();
    }

    @Override
    protected void paintComponent(Graphics g) {
        super.paintComponent(g);
        g.setColor(Color.RED);
        g.fillOval(x, y, radius * 2, radius * 2); 
    }

    @Override
    public void run() {
        while (true) {
            x += dx;
            y += dy;

            if (x <= 0 || x >= panelWidth - radius * 2) dx = -dx;
            if (y <= 0 || y >= panelHeight - radius * 2) dy = -dy;

            repaint(); 

            try {
                Thread.sleep(30);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }

    public static void main(String[] args) {
        JFrame frame = new JFrame("Moving Ball Application");
        MovingBall ballPanel = new MovingBall();
        frame.add(ballPanel);
        frame.pack();
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setLocationRelativeTo(null);
        frame.setVisible(true);
    }
}