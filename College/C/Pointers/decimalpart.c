// To separate integer part and float part for the given float number by calling
// a function separate
#include<stdio.h>
void separate(float n,int *integer,float *decimal){
    *integer= n;  // integer's datatype is int so only int value will be stored 
    *decimal= n-*integer;
}
int main ()
{
    float n,decimal;
    int integer;
    printf("Enter your number : ");
    scanf("%f",&n);
    separate(n,&integer,&decimal);
    printf("Integer part = %d",integer);
    printf("\nDecimal part = %.2f",decimal);

}