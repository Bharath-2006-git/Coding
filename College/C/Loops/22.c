#include <stdio.h>
int main(){
    int a,b,i,count;
    printf("Enter the numbers :");
    scanf("%d%d",&a,&b);
    for(count=0,i=b;(a-i)>=0;count++){
        a=a-i;
    }
    
    printf("The quotient and remainder is equal %d and %d respectively",count,a);
}