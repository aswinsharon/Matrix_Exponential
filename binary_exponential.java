import java.util.Scanner;

public class binary_exponential {

    static int powerOf(int a, int b) {
        int result = 1;
        while (b > 0) {
            if ((b & 1) == 1) {
                result = result * a;
            }
            a *= a;
            b = b >> 1;
        }
        return result;
    }

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        int a = scanner.nextInt();
        int b = scanner.nextInt();

        System.out.println(powerOf(a, b));

        scanner.close();
    }
}