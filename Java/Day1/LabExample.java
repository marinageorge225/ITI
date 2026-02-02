class LabExample {
public static void main(String[] args) {
System.out.println("Welcome to the Java Command-Line Application");
if (args.length == 0) {
System.out.println("No inputs");}
else{
for (int i=0;i<args.length;i++) {
System.out.println("Argument "+ (i + 1) + ": " + args[i]);
}}}}