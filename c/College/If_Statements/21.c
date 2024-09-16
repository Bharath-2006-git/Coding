#include <stdio.h>
int main(){
    int a;
    printf("Enter the number = ");
    scanf("%d",&a);
    if(a>=0){
        if(a%2==0){
            printf(" Number is positive and Even square = %d",a*a);
        }
        else if(a%2!=0){
            printf("Number is positive and Odd square = %d",a*a);
        }
    }
    else if(a<0){
        printf("Number is negative and cube of it = %d",a*a*a);
    }
}