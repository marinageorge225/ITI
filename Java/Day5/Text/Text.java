import javax.swing.*;
import java.awt.*;

public class Text extends JFrame {
    Thread th;
    JLabel textLabel = new JLabel("ITI Intake 46!");
    
    public Text() {
        this.setTitle("Moving Text Application");
        this.setLayout(null); 
        textLabel.setBounds(0, 100, 200, 30); 
        textLabel.setFont(new Font("Arial", Font.BOLD, 24));
        this.add(textLabel);
        th = new Thread(() -> {
            int x = 0;
            int y = textLabel.getY();
            int frameWidth = 600;
            int labelWidth = textLabel.getWidth();
            while (true) {
                x += 5;
                if (x > frameWidth) {
                    x = -labelWidth;
                }
                textLabel.setBounds(x, y, labelWidth, textLabel.getHeight());

                try {
                    Thread.sleep(50);
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
            }
        });
        th.start();
    }

    public static void main(String[] args) {
        Text app = new Text();
        app.setBounds(50, 50, 600, 300);
        app.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        app.setVisible(true);
    }
}