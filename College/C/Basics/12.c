#include <stdio.h>

int main() {
    float f, i; 
    float cm1, cm2, cm; 

    printf("Enter height in feet: ");
    scanf("%f", &f);

    printf("Enter height in inches: ");
    scanf("%f", &i);

   
    cm1 = f * 30.48; 
    cm2 = i * 2.54;  
    cm = cm1 + cm2;

    printf("Height in cm is %.2f\n", cm);

}