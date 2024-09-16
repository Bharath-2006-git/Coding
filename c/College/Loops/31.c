#include <stdio.h>
int main(){
    int n,i;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        if(n%i==0) break;
    }
        if(i<=n/2)
        printf("Composite");
        else if(n<1||n==1) printf("Not applicable");
        else printf("Prime");
}