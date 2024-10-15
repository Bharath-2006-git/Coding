#include<stdio.h>
int main(){
    int a,b;
    printf("Enter 1st number = ");
    scanf("%d",&a);
    printf("Enter the 2nd number = ");
    scanf("%d",&b);
    if(a%10==b%10){
        printf("They end with same number");
    }
    else{
        printf("They do not end with same number");
    }
}