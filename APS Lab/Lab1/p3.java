import java.util.Scanner;

public class p3 {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int maxLength = 100;
        char[] letters = new char[maxLength];
        int length = 0;

        System.out.println("Enter letters one at a time, and enter '%' to finish:");
        while (true) {
            char input = scanner.next().charAt(0);
            if (input == '%') {
                break;
            }
            if (length < maxLength) {
                letters[length] = input;
                length++;
            }
        }

        boolean foundAdjacent = false;
        for (int i = 0; i < length - 1; i++) {
            char first = letters[i];
            char second = letters[i + 1];
            if (Math.abs(first - second) == 1) {
                System.out.println("Letters " + first + " and " + second + " appear next to each other alphabetically.");
                foundAdjacent = true;
                break;
            }
        }

        if (!foundAdjacent) {
            System.out.println("No letters appear next to each other alphabetically.");
        }

        scanner.close();
    }
}