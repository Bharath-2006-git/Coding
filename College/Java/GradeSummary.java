import java.util.Scanner;

public class GradeSummary {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter physics marks: ");
        int physics = sc.nextInt();

        System.out.print("Enter chemistry marks: ");
        int chemistry = sc.nextInt();

        System.out.print("Enter biology marks: ");
        int biology = sc.nextInt();

        int total = physics + chemistry + biology;
        double average = total / 3.0;

        System.out.println("Total score: " + total);
        System.out.println("Average score: " + average);
    }
}
