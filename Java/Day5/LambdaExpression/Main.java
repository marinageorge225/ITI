class Main{
	public static void main(String args[]){
		String str1 = "Student";
		String str2="iti";
		
		String longer = betterString.betterString(str1, str2, (s1, s2) -> s1.length() > s2.length());
		System.out.println("Longer string: " + longer);
		
	}
}