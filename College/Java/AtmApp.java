class NoBal extends Exception {
    NoBal(String msg) { super(msg); }
}

class Atm {
    int pin = 1234;
    int bal = 5000;

    void wd(int p, int amt) throws NoBal {
        if (p != pin) throw new SecurityException("Wrong PIN!");
        if (amt > bal) throw new NoBal("No balance!");
        bal -= amt;
        System.out.println("OK! Bal: " + bal);
    }
}

public class AtmApp {
    public static void main(String[] a) {
        Atm atm = new Atm();
        try {
            atm.wd(1234, 6000); 
        } catch (SecurityException e) {
            System.out.println(e.getMessage());
        } catch (NoBal e) {
            System.out.println(e.getMessage());
        }
    }
}
