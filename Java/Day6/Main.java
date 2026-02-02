public class Main {
    public static void main(String[] args) {
        Dictionary dict = new Dictionary();
        
        dict.addWord('B', "Ball", "Toy");
        dict.addWord('B', "Ball", "Toy");  
        dict.printDictionary();
        
        // Words for letter B 
        dict.printWordsOfLetter('B');
        
        //Search by description 'Animal'
        for (Word w : dict.searchByDescription("Animal")) {
            System.out.println(w.getWord() + " (" + w.getDescription() + ")");
        }
        
        //Search by description 'Toy'
        for (Word w : dict.searchByDescription("Toy")) {
            System.out.println(w.getWord() + " (" + w.getDescription() + ")");
        }
        
        // Testing searchByWord 
        System.out.println("Search for 'Cat': " + dict.searchByWord("Cat"));
        System.out.println("Search for 'Ball': " + dict.searchByWord("Ball"));
        System.out.println("Search for 'Computer': " + dict.searchByWord("Computer"));
        
        //Testing Automatic Sorting
		dict.addWord('B', "Bear", "Animal");
        dict.addWord('B', "Banana", "Fruit");
        dict.addWord('B', "Boat", "Vehicle");
        dict.printWordsOfLetter('B');
    }
}