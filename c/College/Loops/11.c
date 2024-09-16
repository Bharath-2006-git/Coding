#include <stdio.h>
int main(){
    int n,i,f;
    printf("Enter the number:");
    scanf("%d",&n);
    i=1;
    f=1;
    while(i<=n){
        f=f*i;
        i++;
    
    }
    printf("%d",f);

}