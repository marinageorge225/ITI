public class Word implements Comparable<Word> {
    private String word;
    private String description; 
    
    public Word(String word, String description) {
        this.word = word;
        this.description = description;
    }
    
    public String getWord() {
        return word;
    }
    
    public String getDescription() {
        return description;
    }
    
    @Override
    public String toString() {
        return word + " (" + description + ")";
    }
    
    
    @Override
    public int compareTo(Word other) {
        return this.word.compareToIgnoreCase(other.word);
    }
}