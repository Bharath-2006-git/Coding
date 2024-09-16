#include<stdio.h>
int main(){
    int a,a1,a2;
    printf("Enter the four digit no = ");
    scanf("%d",&a);
    a1=a/10;
    a2=a1%10;
    printf("The second digit = %d",a2);
    return 0;
}