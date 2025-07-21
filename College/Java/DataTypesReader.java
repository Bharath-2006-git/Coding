import java.util.Scanner;

public class DataTypesReader {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a byte: ");
        byte b = sc.nextByte();
        System.out.print("Enter a short: ");
        short s = sc.nextShort();
        System.out.print("Enter an int: ");
        int i = sc.nextInt();
        System.out.print("Enter a long: ");
        long l = sc.nextLong();
        System.out.print("Enter a float: ");
        float f = sc.nextFloat();
        System.out.print("Enter a double: ");
        double d = sc.nextDouble();
        System.out.print("Enter a char: ");
        char c = sc.next().charAt(0);
        System.out.print("Enter a boolean: ");
        boolean bl = sc.nextBoolean();

        System.out.println("byte: " + b + ", short: " + s + ", int: " + i + ", long: " + l +
                ", float: " + f + ", double: " + d + ", char: " + c + ", boolean: " + bl);
    }
}
