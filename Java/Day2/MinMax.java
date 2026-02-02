import java.util.Random;
class MinMax {
    public static void main(String[] args) {
        int[] arr = new int[1000];
        Random random = new Random();
        for (int i = 0; i < arr.length; i++) {
            arr[i] = random.nextInt(1000);
        }
		
        for (int i = 0; i < 10; i++) {
            System.out.println(arr[i]);
        }
		
        long startMinMax = System.nanoTime();
        int min = arr[0];
        int max = arr[0];
        for (int i = 1; i < arr.length; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
            if (arr[i] < min) {
                min = arr[i];
            }
        }
        long endMinMax = System.nanoTime();
        long minMaxTime = endMinMax - startMinMax;

        System.out.println("Minimum value: " + min);
        System.out.println("Maximum value: " + max);
        System.out.println("Min/Max execution time (ns): " + minMaxTime);
    }
}