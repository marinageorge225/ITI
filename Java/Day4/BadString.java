public class BadString extends Exception {
	public BadString() {
		super("Bad string error");
	}
	public BadString(String message) {
		super(message);
	}
}