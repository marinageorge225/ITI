import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {

        ArrayList<Rectangle> rectangles = new ArrayList<>();
        rectangles.add(new Rectangle());

        ArrayList<Circle> circles = new ArrayList<>();
        circles.add(new Circle());
		
		ArrayList<Shape> list = new ArrayList<>();
        list.add(new Circle());

        Picture p = new Picture();

        p.drawPics(rectangles);
        p.drawPics(circles);
		p.drawPics(list);
    }
}