public class Example4 {
    public static void main(String[] args) {
        try {
            String str = "";
            System.out.println(str.length());
        } catch (NullPointerException e) {
            System.out.println("Error: Null value encountered!");
        }
    }
}