#include <stdio.h>

int main() {
    float weight, height, bmi;
    
    printf("Enter weight (in kg): ");
    scanf("%f", &weight);

    printf("Enter height (in meters): ");
    scanf("%f", &height);
   
    bmi = weight / (height * height);
   
    if (bmi <= 18.5) {
        printf("Underweight\n");
    } else if (bmi <= 24.9) {
        printf("Normal weight\n");
    } else if (bmi <= 39.9) {
        printf("Overweight\n");
    } else {
        printf("Obese\n");
    }

    return 0;
}
