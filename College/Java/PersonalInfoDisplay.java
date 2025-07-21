import java.util.Scanner;

public class PersonalInfoDisplay {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter your name: ");
        String name = sc.nextLine();
        System.out.print("Enter your age: ");
        int age = sc.nextInt();
        sc.nextLine(); 
        System.out.print("Enter your city: ");
        String city = sc.nextLine();
        System.out.printf("Name: %s | Age: %d | City: %s\n", name, age, city);
    }
}
