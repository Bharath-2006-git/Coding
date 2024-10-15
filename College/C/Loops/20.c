#include <stdio.h>
int main(){
    int a,b,s,i;
    printf("Enter a and b :");
    scanf("%d%d",&a,&b);
    for(i=1,s=0;i<=b;i++){
        s=s+a;
    }
    printf("The product of the numbers = %d",s);
}