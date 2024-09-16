#include <stdio.h>
int main(){
    int a,b,p,i;
    printf("Enter a and b :");
    scanf("%d%d",&a,&b);
    for(i=1,p=1;i<=b;i++){
        p=p*a;
    }
    printf("The result of the numbers = %d",p);
}