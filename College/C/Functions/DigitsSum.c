// To find sum of the digits of the given number
#include<stdio.h>
int sum(int a){
    int i=1;
    int sum=0;
    while(a>0){
        sum=sum+a%10;
        a=a/10;
        i++;
    }
    return sum;
    
}
int main(){
        int n;
        printf("Enter the Number : ");
        scanf("%d",&n);
        printf("Sum of the digits = %d",sum(n));
    }