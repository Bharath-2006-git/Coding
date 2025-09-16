public class Example1 {
    public static void main(String[] args) {
        try {
            int a = 10, b = 0;
            int result = a / b;   // risky code
            System.out.println("Result: " + result);
        } catch (ArithmeticException e) {
            System.out.println("Error: Cannot divide by zero!");
        }
    }
}
