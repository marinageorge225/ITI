import java.util.function.BiPredicate;

class betterString{
	public static String betterString(String s1, String s2, BiPredicate<String, String> predicate) {
		 return predicate.test(s1, s2) ? s1 : s2;
    }
}