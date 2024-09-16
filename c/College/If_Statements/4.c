#include<stdio.h>
int main(){
    int n;
    printf("Enter a number = ");
    scanf("%d",&n);
    if(n<0){
        printf("The number is negative and Sqaure of the number = %d",n*n);}
        else{
            printf("The number is positive and Cube of the Number = %d",n*n*n);
        }


}