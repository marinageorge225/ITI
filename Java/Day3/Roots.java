public class Roots {

    private String root1;
    private String root2;

    public String getRoot1() { return root1; }
    public void setRoot1(String root1) { this.root1 = root1; }

    public String getRoot2() { return root2; }
    public void setRoot2(String root2) { this.root2 = root2; }

    public void computeRoots(QuadraticEquation eq, double discriminant) {
        double a = eq.getA();
        double b = eq.getB();

        if (discriminant >= 0) {
            double sqrtD = Math.sqrt(discriminant);
            root1 = String.valueOf((-b + sqrtD) / (2 * a));
            root2 = String.valueOf((-b - sqrtD) / (2 * a));
        } else {
            double real = -b / (2 * a);
            double imag = Math.sqrt(-discriminant) / (2 * a);
            root1 = real + " + " + imag + "i";
            root2 = real + " - " + imag + "i";
        }
    }
}