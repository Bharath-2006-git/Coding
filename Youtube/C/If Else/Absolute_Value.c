#include<stdio.h>
int main(){
    int n;
    printf("Enter the no = ");
    scanf("%d",&n);
    if(n<0){
        n=n*(-1);

    }
    printf("Absolute value = %d",n);
}