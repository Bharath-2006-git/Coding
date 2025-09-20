class Atm {
    int pin = 1234;
    int bal = 5000;

    void wd(int p, int amt) {
        if (p != pin) throw new SecurityException("Wrong PIN!");
        if (amt > bal) throw new IllegalArgumentException("Insufficient Balance!");
        bal -= amt;
        System.out.println("OK! Bal: " + bal);
    }
}

public class AtmApp {
    public static void main(String[] a) {
        Atm atm = new Atm();
        try {
            atm.wd(1234, 2000);
        } catch (SecurityException e) {
            System.out.println(e.getMessage());
        } catch (IllegalArgumentException e) {
            System.out.println(e.getMessage());
        }
    }
}
