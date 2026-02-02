public class Main {
    public static void main(String[] args) {

        if (args.length != 3) {
            System.out.println("Enter <a> <b> <c>");
            return;
        }

        try {
            double a = Double.parseDouble(args[0]);
            double b = Double.parseDouble(args[1]);
            double c = Double.parseDouble(args[2]);
            QuadraticEquation eq = new QuadraticEquation(a, b, c);
            Discriminant disc = new Discriminant();
            double discValue = disc.apply(eq);
			
            Root roots; 

            if (discValue >= 0) {
                double sqrtD = Math.sqrt(discValue);
                roots = new RealRoots((-b + sqrtD) / (2 * a), (-b - sqrtD) / (2 * a));
            } else {
                double real = -b / (2 * a);
                double imag = Math.sqrt(-discValue) / (2 * a);
                roots = new ImaginaryRoot(real, imag);
            }

            roots.print(); 

        } catch (NumberFormatException e) {
            System.out.println("Error: Please enter valid numbers.");
        }
    }
}