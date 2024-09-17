/* Q7) Write a C program to find whether the given 2 digit number is 
zig zig, /zig zag, /zag zig, (if both the digits are same then print zig zig) 
, (if the 1st digit is less then 2nd digit then print zig zag)  
(if the 1st digit greater than 2nd digit print zag zig). */
#include <stdio.h>

int main(void) {
    int two_digit_number;
    printf("Enter the 2 digit number : ");
    scanf("%d", &two_digit_number);
    int second_digit = two_digit_number%10 ;
    int first_digit = (two_digit_number - second_digit) / 10 ;
    if (two_digit_number < 10 && two_digit_number > -10) {
        printf("\nZag-Zag");
    }
    else if (first_digit == second_digit) {
        printf("\nZig-Zig");
    }
    else if (first_digit < second_digit) {
        printf("\nZig-Zag");
    }
    else if (first_digit > second_digit) {
        printf("\nZag-Zig");
    }
    
}