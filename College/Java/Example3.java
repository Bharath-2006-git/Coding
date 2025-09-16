public class Example3 {
    public static void main(String[] args) {
        try {
            String str = "abc";   // not a number
            int num = Integer.parseInt(str);  // risky
            System.out.println(num);
        } catch (NumberFormatException e) {
            System.out.println("Error: String is not a valid number!");
        }
    }
}
