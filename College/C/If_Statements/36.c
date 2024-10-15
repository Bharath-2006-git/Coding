#include <stdio.h>
int main(){
    int n,n1,n2;
    printf("Enter the number =");
    scanf("%d",&n);
    n1=n/10;
    n2=n%10;
    (n1==n2)?printf("Mirror number"):printf("Not a mirror number");
}