import java.util.Scanner;

public class AgeChecker {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter your age in years: ");
        int age = sc.nextInt();

        if (age >= 18) {
            System.out.println("You meet the age requirement for voting.");
        } else {
            System.out.println("You are not old enough to vote yet.");
        }
    }
}
