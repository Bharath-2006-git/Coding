#include<stdio.h>
int main(){
    int a,b,c,d,e,sum;
    printf("Enter the marks in subject a = ");
    scanf("%d",&a);
    printf("\nEnter the marks in subject b = ");
    scanf("%d",&b);
    printf("\nEnter the marks in subject c = ");
    scanf("%d",&c);
    printf("\nEnter the marks in subject d = ");
    scanf("%d",&d);
    printf("\nEnter the marks in subject e = ");
    scanf("%d",&e);
    sum = a+b+c+d+e;
    printf("\nThe total marks of student = %d",sum);

}