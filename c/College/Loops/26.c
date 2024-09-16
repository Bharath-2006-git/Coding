#include <stdio.h>
int main(){
    int n,a=1;
    do{
        printf("Enter the number:");
        scanf("%d",&n);
        if(n%2!=0){
        
        a=a*n;}
        
        
    }

    while(n%2!=0);
    printf("The Result is %d",a);
}