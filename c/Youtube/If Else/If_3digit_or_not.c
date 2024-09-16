#include<stdio.h>
int main(){
    int n;
    printf("Enter the number = ");
    scanf("%d",&n);
    if(n>99&&n<1000){
        printf("Number is three digit");
    
    }
    else{
        printf("Number is not three digit");
    }
}