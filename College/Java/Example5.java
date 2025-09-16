public class Example5 {
    public static void main(String[] args) {
        try {
            String str = "123";
            int num = Integer.parseInt(str);  // Converts string to int
            int result = 10 / 0;
            
            System.out.println("Parsed number: " + num);
            System.out.println("Result: " + result);
        } catch (NumberFormatException e) {
            System.out.println("Error: Invalid number format!");
        } catch (ArithmeticException e) {
            System.out.println("Error: Division by zero!");
        }
    }
}
