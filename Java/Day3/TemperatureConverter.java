class TemperatureConverter implements TemperatureConverterInterface {
	
    public double centigradeToFahrenheit(double c) {
        return (c * 9 / 5) + 32;
    }

    public static void main(String[] args) {
        if (args.length < 1) {
            System.out.println("Please provide a temperature in Centigrade ");
            return;
			}
        String input = args[0];
        String pattern = "^-?\\d+(\\.\\d+)?$";
        if (!input.matches(pattern)) {
            System.out.println(" The argument must be a valid number.");
            return;
        }
        double centigrade = Double.parseDouble(input);
        TemperatureConverter tc = new TemperatureConverter();
        double fahrenheit = tc.centigradeToFahrenheit(centigrade);

        System.out.println("Centigrade: " + centigrade);
        System.out.println("Fahrenheit: " + fahrenheit);
    }
}