public class p3 {
    public static void main(String[] args) {
        int number = args[0].charAt(0) - '0';

        for (int i = 1; i <= 10; i++) {
            System.out.println(number + " x " + i + " = " + (number * i));
        }
    }
}