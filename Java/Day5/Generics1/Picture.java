import java.util.List;
class Picture{
	public void drawPics(List<? extends Shape> lists){
		for(Shape s:lists){
			s.draw(); 
}
}
}
