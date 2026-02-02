public class ExceptionHandler {

    public void printStringIncludeITI(String sentence) throws BadString {
        if (!sentence.contains("ITI")) {
            throw new BadString("Sentence does not include ITI");
        }
        System.out.println("Valid sentence: " + sentence);
    }

    public void printStringIncludeNumber(String sentence) throws BadString {
        if (!sentence.matches(".*\\d.*")) {
            throw new BadString("Sentence does not include numbers");
        }
        System.out.println("Valid sentence: " + sentence);
    }

    public void printGoodStatement(String sentence) throws BadString {
        if (sentence.trim().matches("\\S+")) {
            throw new BadString("Sentence contains only one word");
        }
        System.out.println("Valid sentence: " + sentence);
    }
}