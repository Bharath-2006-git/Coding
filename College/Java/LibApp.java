class NoBook extends Exception {
    NoBook(String msg) { super(msg); }
}

class Limit extends Exception {
    Limit(String msg) { super(msg); }
}

class Lib {
    int copy = 2;
    int taken = 3;

    void borrow() throws NoBook, Limit {
        if (copy == 0) throw new NoBook("No copies!");
        if (taken >= 3) throw new Limit("Max 3 books!");
        copy--; taken++;
        System.out.println("Book OK! Left: " + copy);
    }
}

public class LibApp {
    public static void main(String[] a) {
        Lib l = new Lib();
        try {
            l.borrow(); 
        } catch (NoBook e) {
            System.out.println(e.getMessage());
        } catch (Limit e) {
            System.out.println(e.getMessage());
        } finally {
            System.out.println("Transaction Successful");
        }
    }
}
