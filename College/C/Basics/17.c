#include<stdio.h>
int main(){
    int a,a1,a2;
    printf("Enter two digit no = ");
    scanf("%d",&a);
    a1=a%10;
    a2=a/10;
    printf("\nReversed no = %d%d",a1,a2);
}