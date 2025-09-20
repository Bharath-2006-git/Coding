public class FinallyExample {
    public static void main(String[] args) {
        try{
            int num=10/0;
            System.out.println("Result: "+num);
        }
        catch(ArithmeticException e){
            System.out.println("Exception caught "+e.getMessage());

        }
        finally{
            System.out.println("This block always executes!");
        }
    }
}
