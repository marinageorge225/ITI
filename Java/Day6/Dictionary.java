import java.util.*;

public class Dictionary {

    private Map<Character, TreeSet<Word>> dictionary;

    public Dictionary() {
        dictionary = new TreeMap<>();
        initialize();
        //sortAllWords();
    }

    private void add(char letter, Word word) {
        dictionary.putIfAbsent(letter, new TreeSet<>());
        dictionary.get(letter).add(word);
    }

    private void initialize() {
        add('A', new Word("Ant", "Animal"));
        add('A', new Word("Apple", "Fruit"));

        add('B', new Word("Bird", "Animal"));
        add('B', new Word("Book", "Object"));

        add('C', new Word("Cat", "Animal"));
        add('C', new Word("Computer", "Technology"));

        add('D', new Word("Dog", "Animal"));
        add('D', new Word("Desk", "Object"));

        add('E', new Word("Elephant", "Animal"));
        add('E', new Word("Egg", "Food"));

        add('F', new Word("Fish", "Animal"));
        add('F', new Word("Fan", "Object"));

        add('G', new Word("Goat", "Animal"));
        add('G', new Word("Grapes", "Fruit"));

        add('H', new Word("Horse", "Animal"));
        add('H', new Word("House", "Place"));

        add('I', new Word("Insect", "Animal"));
        add('I', new Word("Internet", "Technology"));

        add('J', new Word("Jaguar", "Animal"));
        add('J', new Word("Juice", "Drink"));

        add('K', new Word("Kangaroo", "Animal"));
        add('K', new Word("Keyboard", "Technology"));

        add('L', new Word("Lion", "Animal"));
        add('L', new Word("Laptop", "Technology"));

        add('M', new Word("Monkey", "Animal"));
        add('M', new Word("Mouse", "Technology"));

        add('N', new Word("Nest", "Object"));
        add('N', new Word("Nectarine", "Fruit"));

        add('O', new Word("Owl", "Animal"));
        add('O', new Word("Orange", "Fruit"));

        add('P', new Word("Parrot", "Animal"));
        add('P', new Word("Phone", "Technology"));

        add('Q', new Word("Queen Bee", "Animal"));
        add('Q', new Word("Queue", "Computer Science"));

        add('R', new Word("Rabbit", "Animal"));
        add('R', new Word("Router", "Technology"));

        add('S', new Word("Snake", "Animal"));
        add('S', new Word("School", "Place"));

        add('T', new Word("Tiger", "Animal"));
        add('T', new Word("Table", "Object"));

        add('U', new Word("Umbrella Bird", "Animal"));
        add('U', new Word("USB", "Technology"));

        add('V', new Word("Vulture", "Animal"));
        add('V', new Word("Van", "Vehicle"));

        add('W', new Word("Wolf", "Animal"));
        add('W', new Word("Window", "Object"));

        add('X', new Word("Xerus", "Animal"));
        add('X', new Word("Xylophone", "Object"));

        add('Y', new Word("Yak", "Animal"));
        add('Y', new Word("Yogurt", "Food"));

        add('Z', new Word("Zebra", "Animal"));
        add('Z', new Word("Zoo", "Place"));
    }

    public List<Word> searchByDescription(String description) {
        List<Word> result = new ArrayList<>();
        for (TreeSet<Word> words : dictionary.values()) {
            for (Word w : words) {
                if (w.getDescription().equalsIgnoreCase(description)) {
                    result.add(w);
                }
            }
        }
        return result;
    }

    public String searchByWord(String word) {
        for (TreeSet<Word> words : dictionary.values()) {
            for (Word w : words) {
                if (w.getWord().equalsIgnoreCase(word)) {
                    return w.getDescription();
                }
            }
        }
        return null;
    }

    public void printDictionary() {
        for (var entry : dictionary.entrySet()) {
            System.out.println(entry.getKey() + ":");
            for (Word w : entry.getValue()) {
                System.out.println("  - " + w);
            }
        }
    }

    public void printWordsOfLetter(char letter) {
        TreeSet<Word> words = dictionary.get(letter);
        if (words == null || words.isEmpty()) {
            System.out.println("No words found for letter " + letter);
            return;
        }
        System.out.println(letter + ":");
        for (Word w : words) {
            System.out.println("  - " + w);
        }
    }

    public void addWord(char letter, String word, String description) {
        dictionary.putIfAbsent(letter, new TreeSet<>());
        
        Word newWord = new Word(word, description);
        boolean added = dictionary.get(letter).add(newWord);
        
        if (added) {
            System.out.println("Word '" + word + "' added successfully.");
        } else {
            System.out.println("Word '" + word + "' already exists under letter " + letter);
        }
    }

}