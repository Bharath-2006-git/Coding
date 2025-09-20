import java.util.Scanner;

public class StudentGrade {
    
    public static void validateMarks(int marks) throws Exception {
        if (marks < 0 || marks > 100) {
            throw new Exception("Marks must be between 0 and 100.");
        }
    }
    
    public static String calculateGrade(int marks) {
        if (marks >= 90) {
            return "Grade A";
        } else if (marks >= 75) {
            return "Grade B";
        } else if (marks >= 50) {
            return "Grade C";
        } else {
            return "Fail";
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        try {
            System.out.print("Enter the student's marks (out of 100): ");
            int marks = scanner.nextInt();
            
            validateMarks(marks);
            
            String grade = calculateGrade(marks);
            System.out.println("The student's grade is: " + grade);
            
        } catch (Exception e) {
            System.out.println("Error: " + e.getMessage());
        } finally {
            System.out.println("Result Processed");
            scanner.close();
        }
    }
}
