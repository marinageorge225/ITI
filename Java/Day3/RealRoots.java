public class RealRoots implements RootsInterface {
    private double root1;
    private double root2;

    public RealRoots(double root1, double root2) {
        this.root1 = root1;
        this.root2 = root2;
    }

    @Override
    public void print() {
        System.out.println("Root 1: " + root1);
        System.out.println("Root 2: " + root2);
    }
}