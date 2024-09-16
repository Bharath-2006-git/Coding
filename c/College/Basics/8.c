#include <stdio.h>
int main(){
    float a,b;
    printf("Enter Tempertaure in F = ");
    scanf("%f",&a);
    b=(a-32)*5/9;
    printf("Temperature in C = %f",b);
}