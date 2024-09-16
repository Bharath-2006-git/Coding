/* Q5) Write a C program to find whether person A is stronger than person B 
or not. (his weight and how much he can lift weights). */
#include <stdio.h>

int main(void) {
    int wa, wla, wb, wlb;
    printf("ENTER WEIGHT OF A, WEIGHT LIFT BY A, WEIGHT OF B, WEIGHT LIFT BY B : ");
    scanf("%d %d %d %d", &wa, &wla, &wb, &wlb);
    float ratio_of_a = (float) wla / wa ;
    float ratio_of_b = (float) wlb / wb ;
    if (ratio_of_a>ratio_of_b) {
        printf("\nA IS STRONGER");
    }
    else if (ratio_of_b>ratio_of_a) {
        printf("\nB IS STRONGER");
    }
    else {
        printf("\nEQUAL");
    }
}