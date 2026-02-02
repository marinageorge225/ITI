import java.util.function.Function;

public class Discriminant implements Function<QuadraticEquation, Double> {

    private double discriminant;

    public double getDiscriminant() { return discriminant; }
    public void setDiscriminant(double discriminant) { this.discriminant = discriminant; }

    @Override
    public Double apply(QuadraticEquation eq) {
        double a = eq.getA();
        double b = eq.getB();
        double c = eq.getC();
        discriminant = b * b - 4 * a * c;
        return discriminant;
    }
}