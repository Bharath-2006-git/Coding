#include<stdio.h>
int main(){
    int lf,b;
    printf("Enter the cost of Lady finger = ");
    scanf("%d",&lf);
    printf("\nEnter the cost of Brinjal = ");
    scanf("%d",&b);
    if(lf<b){
        printf("Buy Lady finger");
    }
    else{
        printf("Buy Brinjal");
    }
}