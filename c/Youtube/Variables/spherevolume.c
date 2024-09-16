#include <stdio.h>
int main(){
    float r,pi,V;
    printf("Enter the radius of sphere = ");
    scanf("%f",&r);
    pi=3.14;
    V = 4*pi*r*r*r/3;
    printf("\nVoulme of sphere = %.1f",V);

}