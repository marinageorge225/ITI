class CountNonAlphabitic {
    public static void main(String args[]) {
        String sentence = "I am a Strudent in intake 46, with 1st trcak in ITI . ";
        String result = ""; 
        for (int i = 0; i < sentence.length(); i++) {
            char ch = sentence.charAt(i);
            if (!Character.isLetter(ch) && ch != ' ') {
                result += ch; 
            }
        }
        System.out.println("Non-alphabetic characters : " + result);
    }
}