#include <stdio.h>
int main(){
    int n,i;
    printf("Enter a number:");
    scanf("%d",&n);
    i=1;
    while(i<n){
        if(n%i==0) printf("%d\n",i);
        i++;

    }
}