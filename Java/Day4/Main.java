public class Main {
    public static void main(String[] args) {
		
        if (args.length == 0) {
            System.out.println("Please provide a sentence!");
            return;
        }
		
        String sentence = String.join(" ", args);
        ExceptionHandler handler = new ExceptionHandler();
        try {
            handler.printStringIncludeITI(sentence);
        } catch (BadString e) {
            System.out.println("ITI Check Failed: " + e.getMessage());
			e.printStackTrace();
        }

        try {
            handler.printStringIncludeNumber(sentence);
        } catch (BadString e) {
            System.out.println("Number Check Failed: " + e.getMessage());
			e.printStackTrace();
        }

        try {
            handler.printGoodStatement(sentence);
        } catch (BadString e) {
            System.out.println("Word Count Check Failed: " + e.getMessage());
			e.printStackTrace();
        }
    }
}