/* Q3) Write a C program to find whether the given 2 digit number is handsome 
number or not.(a number is said to be handsome if sum of digits >= product 
of digits). */
#include <stdio.h>

int main(void) {
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int n1 = n%10;
    int n2 = n/10 ;
    int sum= n1+n2 ;
    int product = n1*n2 ;
    if (sum>=product) {
        printf("\nHandsome Number");
    }
    else {
        printf("\nNot Handsome Number"); 
    }
}
