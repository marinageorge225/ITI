import java.math.BigDecimal;

class Complex <T extends BigDecimal>{
	private T real;
	private T imag;
	
	public Complex(T real , T imag){
		this.real = real ;
		this.imag = imag ; 
	}
	public T getReal(){
		return this.real;
	}
	public T getImag(){
		return this.imag;
	}
	
	public Complex add(Complex c){
		Complex comp = new Complex(c.real.add(this.real) , c.imag.add(this.imag));
		return comp;
	}
		public Complex subtract(Complex c){
		Complex comp = new Complex(c.real.subtract(this.real) , c.imag.subtract(this.imag));
		return comp;
		
	}
    public String toString() {
       return real + " + " + imag + "i";
    }
	
	
}