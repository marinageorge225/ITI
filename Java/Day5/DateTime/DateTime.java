import javax.swing.*;
import java.awt.*;
import java.util.Date;
class DateTime extends JFrame {
    Thread th;
    JLabel timeLabel = new JLabel();
    Date d = new Date();

    public DateTime() {
        this.setTitle("Date and Time Application");
        timeLabel.setHorizontalAlignment(JLabel.CENTER);
        timeLabel.setText(d.toString());
        this.add(timeLabel, BorderLayout.CENTER);
        th = new Thread(() -> {
            while (true) {
                d = new Date();
                timeLabel.setText(d.toString());
                try {
                    Thread.sleep(1000);
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
            }
        });
        th.start();
    }

    public static void main(String[] args) {
        DateTime app = new DateTime();
        app.setBounds(50, 50, 600, 400);
        app.setVisible(true);
    }
}