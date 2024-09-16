//Sum of n naturalk numbers
#include <stdio.h>
int main(){
    int i,n,sum;
    printf("Enter the number:");
    scanf("%d",&n);
    
    
    
    for(i=1,sum=0;i<=n;i++){
        
        sum=sum+i;
        
    }
    printf("Sum = %d",sum);
    
}