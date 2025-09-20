class Lib {
    int copy = 2;
    int taken = 3;

    void borrow() {
        if (copy == 0) throw new IllegalStateException("No copies available!");
        if (taken >= 3) throw new IllegalArgumentException("You can borrow max 3 books!");
        copy--; 
        taken++;
        System.out.println("Book OK! Left: " + copy);
    }
}

public class LibApp {
    public static void main(String[] a) {
        Lib l = new Lib();
        try {
            l.borrow();
        } catch (IllegalStateException e) {
            System.out.println(e.getMessage());
        } catch (IllegalArgumentException e) {
            System.out.println(e.getMessage());
        } finally {
            System.out.println("Transaction Successful");
        }
    }
}
