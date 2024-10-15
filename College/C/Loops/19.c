#include <stdio.h>
int main(){
    int n,n1,n2,n3;
    printf("Enter n value: ");
    scanf("%d",&n);
    for(n1=0,n2=1;n1+n2<=n;n1=n2,n2=n3){
        
        n3=n1+n2;
        printf("%d\n",n3);
        
    }
}