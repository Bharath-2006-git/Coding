class InsufficientBalanceException extends RuntimeException {
    InsufficientBalanceException(String m) { super(m); }
}

class Atm {
    int pin = 1234, bal = 1000;

    void wd(int p, int amt) {
        if (p != pin) throw new SecurityException("Wrong PIN!");
        if (amt > bal) throw new InsufficientBalanceException("Insufficient Balance!");
        bal -= amt;
        System.out.println("OK! Bal: " + bal);
    }
}

public class AtmApp {
    public static void main(String[] a) {
        Atm atm = new Atm();
        try {
            atm.wd(1334, 2000);
        } catch (SecurityException e) {
            System.out.println(e.getMessage());
        } catch (InsufficientBalanceException e) {
            System.out.println(e.getMessage());
        }
       
    }
}
