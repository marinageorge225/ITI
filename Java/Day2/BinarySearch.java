import java.util.Random;
class BinarySearch {
    public static void main(String[] args) {
        BinarySearch obj = new BinarySearch();
        int[] arr = new int[1000];
        Random random = new Random();
        for (int i = 0; i < arr.length; i++) {
            arr[i] = random.nextInt(1000);
        }

        System.out.println("Before Sorting:");
        for (int i = 0; i < 10; i++) {
            System.out.println(arr[i]);
        }
		
		/** Sorting */
		
        long startSort = System.nanoTime();
        obj.sort(arr);
        long endSort = System.nanoTime();
		System.out.println("After Sorting:");
		for (int i = 0; i < 10; i++) {
            System.out.println(arr[i]);
        }
        int min = arr[0];
        int max = arr[arr.length - 1];
        System.out.println("Minimum value: " + min);
        System.out.println("Maximum value: " + max);
        System.out.println("Sorting execution time (ns): " + (endSort - startSort));


        /** Search  */
        int target = arr[300];
        long startSearch = System.nanoTime();
        int index = obj.binarySearch(arr, target);
        long endSearch = System.nanoTime();
        if (index != -1)
            System.out.println("Target " + target + " found at index " + index);
        else
            System.out.println("Target not found");

        System.out.println("Binary search execution time (ns): " + (endSearch - startSearch));
    }
	
    /** Sorting Array  */
    public void sort(int[] arr) {
        int temp;
        int size = arr.length;
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - 1 - i; j++) {
                if (arr[j] > arr[j + 1]) {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

    /** Binary Search */
    public int binarySearch(int[] arr, int target) {
        int left = 0;
        int right = arr.length - 1;

        while (left <= right) {
            int mid = (left + right) / 2;

            if (arr[mid] == target)
                return mid;
            else if (arr[mid] < target)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return -1;
    }
}