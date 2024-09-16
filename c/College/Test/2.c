/* Q4) Write a C program to find whether to buy circular dining table or 
rectangular dining table based on area of the dining table. 
(inputs = radius, length, breadth.) */
#include <stdio.h>

int main(void) {
    int l, b, r;
    float pi = 3.14 ;
    printf("Enter Values of Length, Breadth and Radius : ");
    scanf("%d %d %d", &l, &b, &r);
    int area_of_rectangle = l * b ;
    float area_of_circle= pi*r*r ;
    if (area_of_circle>area_of_rectangle) {
        printf("\nBuy circular table");
    }
    else {
        printf("\nBuy rectangular table");
    }
}
