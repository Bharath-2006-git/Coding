import java.util.Scanner;

public class TempConversion {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter temperature in Celsius: ");
        float celsius = sc.nextFloat();
        float fahrenheit = (celsius * 9 / 5) + 32;
        System.out.println("Temperature in Fahrenheit = " + fahrenheit);
    }
}
