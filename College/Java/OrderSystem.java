class InvalidQuantityException extends Exception {
    public InvalidQuantityException(String message) {
        super(message);
    }
}

class LimitExceededException extends Exception {
    public LimitExceededException(String message) {
        super(message);
    }
}

public class OrderSystem {
    
    public static void placeOrder(int quantity, double pricePerItem) 
            throws InvalidQuantityException, LimitExceededException {
        
        if (quantity <= 0) {
            throw new InvalidQuantityException("Quantity must be greater than zero.");
        }
        
        double total = quantity * pricePerItem;
        
        if (total > 50000) {
            throw new LimitExceededException("Order limit exceeded! Maximum allowed is 50000.");
        }
        
        System.out.println("Order confirmed! Total amount: Rs. " + total);
    }
    
    public static void main(String[] args) {
        try {
            int quantity = 10; 
            double pricePerItem = 1000; 
            
            placeOrder(quantity, pricePerItem);
            
        } catch (InvalidQuantityException | LimitExceededException e) {
            System.out.println("Error: " + e.getMessage());
        } finally {
            System.out.println("Thank you for shopping with us");
        }
    }
}
