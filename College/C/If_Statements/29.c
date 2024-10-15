//Write a c program to calculate electricity bill for the given two inputs 
//Input 1 - Units
//Input 2 - Domestic or Commercial
//Draw a table

#include <stdio.h>

int main() {
    int n;
    char t;
    float bill, billgst;

    printf("Enter number of units consumed: ");
    scanf("%d", &n);
    printf("Enter connection type (c/d): ");
    scanf(" %c", &t);

    if (t == 'c' || t == 'C') {
        if (n <= 100) {
            bill = n * 5.00;
        } else if (n <= 300) {
            bill = n * 10.00;
        } else {
            bill = n * 20.00;
        }
        billgst = bill + bill * 0.28;
        printf("Bill before GST: %.2f\n", bill);
        printf("Total bill including GST: %.2f\n", billgst);
    } else if (t == 'd' || t == 'D') {
        if (n <= 100) {
            bill = 0.0;
        } else if (n <= 200) {
            bill = n * 2.00;
        } else if (n <= 500) {
            bill = n * 5.00;
        } else {
            bill = n * 9.00;
        }
        billgst = bill + bill * 0.18;
        printf("Bill before GST: %.2f\n", bill);
        printf("Total bill including GST: %.2f\n", billgst);
    } else {
        printf("Invalid connection type\n");
    }

    return 0;
}
