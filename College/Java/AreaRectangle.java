import java.util.Scanner;

public class AreaRectangle {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter length: ");
        float length = sc.nextFloat();
        System.out.print("Enter breadth: ");
        float breadth = sc.nextFloat();
        float area = length * breadth;
        System.out.println("Area of rectangle = " + area);
    }
}
