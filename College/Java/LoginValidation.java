public class LoginValidation {
    static void validateLogin(String username, String password) {
        if (!username.equals("admin") || !password.equals("1234")) {
            throw new SecurityException("Invalid username or password!");
        } else {
            System.out.println("Login Successful!");
        }
    }

    static void performLogin(String username, String password) {
        try {
            validateLogin(username, password);
        } catch (SecurityException e) {
            System.out.println("Error: " + e.getMessage());
        }
    }

    public static void main(String[] args) {
        performLogin("admin", "1111"); // Case 1 - wrong password
       // performLogin("admin", "1234"); // Case 2 - correct credentials
    }
}
