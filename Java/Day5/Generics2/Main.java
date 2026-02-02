import java.math.BigDecimal;

public class Main {
    public static void main(String[] args) {
        Complex<BigDecimal> c1 =new Complex<>(BigDecimal.valueOf(3),BigDecimal.valueOf(2));
        Complex<BigDecimal> c2 =new Complex<>(BigDecimal.valueOf(1.5), BigDecimal.valueOf(4));
        System.out.println(c1.add(c2));
        System.out.println(c1.subtract(c2));
       
    }
}