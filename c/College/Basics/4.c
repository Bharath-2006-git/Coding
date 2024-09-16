#include<stdio.h>
int main(){
    printf("Enter radius of circle = ");
    float r;
    scanf("%f",&r);
    float a,p;
    a=(3.14)*r*r;
    p=2*(3.14)*r;
    printf("Area and perimeter of circle are %.1f and %.1f",a,p);
    return 0;
}