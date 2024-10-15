#include <stdio.h>
int main(){
    int a,a1,a2,a3,a4;
    printf("Enter three digit no = ");
    scanf("%d",&a);
    a1=a%10;
    printf("\nThe no of 1s = %d",a1);
    a2=a/10;
    a3=a2%10;
    printf("\nThe no of 10s = %d",a3);
    a4=a2/10;
    printf("\nThe no of 100s = %d",a4);
    return 0;




}