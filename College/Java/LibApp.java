class BookNotAvailableException extends RuntimeException {
    BookNotAvailableException(String m) { super(m); }
}
class LimitExceededException extends RuntimeException {
    LimitExceededException(String m) { super(m); }
}

class Lib {
    void borrow(int copy, int taken) {
        if (copy == 0) throw new BookNotAvailableException("No copies available!");
        if (taken >= 3) throw new LimitExceededException("You can borrow max 3 books!");
        System.out.println("Book OK! Left: " + (copy - 1));
    }
}

public class LibApp {
    public static void main(String[] a) {
        Lib l = new Lib();
        try {
            l.borrow(1, 2);   
            l.borrow(0, 2);   
        } catch (Exception e) {
            System.out.println(e.getMessage());
        } finally {
            System.out.println("Transaction Successful");
        }
    }
}
