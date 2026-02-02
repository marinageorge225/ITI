class LabExample2 {
    public static void main(String args[]) {
        if (args.length < 2) {
            System.out.println("Please Enter 2 Args");
        } else {
            String regex ="[0-9]+";	 // "\\d+";  
            if (args[0].matches(regex)) {
                int times = Integer.parseInt(args[0]);
                for (int i = 0; i < times; i++) {
                    System.out.println(args[1]);
                }
            } else {
                System.out.println("Enter an integer");
            }
        }
    }
}