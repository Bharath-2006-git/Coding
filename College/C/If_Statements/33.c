#include <stdio.h>
int main(){
    int a,b,q,r,s,p;
    printf("Enter a and b = ");
    scanf("%d %d",&a,&b);
    (a>b)?(q=a/b,r=a%b,printf("Quotient = %d and Remainder = %d",q,r)):
    (s=a+b,p=a*b,printf("Sum = %d and Product = %d",s,p));
}
