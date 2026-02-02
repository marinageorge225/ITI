import java.util.StringTokenizer;
class WordSplitter{
    public static void main(String[] args) {
        String sentence = "Java developers use Java to build Java applications, and Java is widely used in modern software development.";
        String word = "Java";
		
        // Count using split by space
        String[] words = sentence.split(" ");
        int count = 0;
        for (String w : words) {
            if (w.equals(word) || w.equals(word + ",") || w.equals(word + ".")) {  // <-- fixed
                count++;
            }
        }
        System.out.println("Total occurrences of \"" + word + "\": " + count);
        //-----------------------------------------------
        //Using indexOf 
        System.out.println("\nOccurrences using indexOf :");
        int index = 0;
        int occurrence = 0;
        while ((index = sentence.indexOf(word, index)) != -1) {
            occurrence++;
            System.out.println("Found \"" + word + "\" at index: " + index);
            index += word.length();
        }
        System.out.println("Total occurrences using indexOf: " + occurrence);

        //-----------------------------------------------
        //Using StringTokenizer
        System.out.println("\nTokens using StringTokenizer:");
        StringTokenizer tokenizer = new StringTokenizer(sentence, word);
        while (tokenizer.hasMoreTokens()) {
            System.out.println(tokenizer.nextToken().trim());
        }
    }
}