#include <stdio.h>
int main(){
    int n,n1,n2;
    printf("Enter the number =");
    scanf("%d",&n);
    n1=n/10;
    n2=n%10;
    (n1==9||n2==9)?printf("King"):((n1==5||n2==5)?printf("Queen"):printf("Jack"));
}