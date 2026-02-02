public class ImaginaryRoot implements RootsInterface {
    private double real;
    private double imag;

    public ImaginaryRoot(double real, double imag) {
        this.real = real;
        this.imag = imag;
    }

    @Override
    public void print() {
        System.out.println("Root 1: " + real + " + " + imag + "i");
        System.out.println("Root 2: " + real + " - " + imag + "i");
    }
}