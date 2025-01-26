import java.util.Scanner;

public class p2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int len = 10;
        int[] templist = new int[len];
        int count = 0;

        System.out.println("Enter positive integers, one per line. Enter a negative integer to finish.");

        while (true) {
            int num = scanner.nextInt();
            if (num < 0) {
                break;
            }

            if (count == len) {
                len *= 2;
                int[] newList = new int[len];
                for (int i = 0; i < count; i++) {
                    newList[i] = templist[i];
                }
                templist = newList;
            }

            templist[count++] = num;
        }

        boolean found = false;

        for (int i = 0; i < count; i++) {
            for (int j = 0; j < count; j++) {
                if (i != j) {
                    if (templist[i] == templist[j] * templist[j]) {
                        System.out.println("The number " + templist[j] + " has a square root of " + templist[i] + " in the list.");
                        found = true;
                        break;
                    }
                }
            }
            if (found) break;
        }

        if (!found) {
            System.out.println("No square roots found in the list.");
        }

        scanner.close();
    }
}
