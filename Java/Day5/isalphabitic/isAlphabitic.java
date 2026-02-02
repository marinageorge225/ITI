import java.util.function.Predicate;
class isAlphabitic{
	public static boolean checkAlphabitic(String str){
		//for(int i =0 ; i< str.length ; i++){
		//	if (!Character.isLetter(str.charAt(i))) {
          //      return false;
         //   }
		//}
		//return true;
		return str.chars().allMatch(c -> Character.isLetter(c) || Character.isWhitespace(c));
	}
	
	public static void main(String args[]){
		String s1 = "Hello I am a Student in ITI , Inrake 46";
		String s2 = "Hello I am a Student in ITI ";
		//System.out.println(s1 + " contains only alphabets? " + checkAlphabitic(s1)); 
        // System.out.println(s2 + " contains only alphabets? " + checkAlphabitic(s2)); 
		
		Predicate<String> checkAlphabets = isAlphabitic::checkAlphabitic;
        System.out.println(s1 + " contains only alphabets? " + checkAlphabets.test(s1)); 
        System.out.println(s2 + " contains only alphabets? " + checkAlphabets.test(s2)); 
  
   
	}
}