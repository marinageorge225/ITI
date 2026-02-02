import java.util.Scanner;

public class IPSplitter {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter an IP address: ");
        String ip = sc.nextLine();
        String ipRegex = "^((25[0-5]|2[0-4][0-9]|1[0-9][0-9]|[1-9]?[0-9])\\.){3}"
                       + "(25[0-5]|2[0-4][0-9]|1[0-9][0-9]|[1-9]?[0-9])$";

        if (ip.matches(ipRegex)) {
            String[] parts = ip.split("\\.");
            System.out.println("Valid IP! Parts are:");
            for (int i = 0; i < parts.length; i++) {
                System.out.println("Part " + (i + 1) + ": " + parts[i]);
            }
        } else {
            System.out.println("Invalid IP address!");
        }

        sc.close();
    }
}