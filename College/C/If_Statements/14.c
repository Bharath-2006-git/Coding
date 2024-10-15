#include <stdio.h>
int main(){
    int a;
    printf("Enter Your Salary = ");
    scanf("%d",&a);
    if(a<=20000){
        printf("No tax Just Enjoy");
    }
    else if(a<=30000){
        printf("Your Salary after tax deduction = %d",a-(a*5/100));
    }
    else if(a<=50000){
        printf("Your Salary after tax deduction = %d",a-(a*10/100));
    }
    else if(a<=75000){
        printf("Your Salary after tax deduction = %d",a-(a*15/100));
    }
    else if(a<=100000){
        printf("Your Salary after tax deduction = %d",a-(a*20/100));
    }
    else if(a<=500000){
        printf("Your Salary after tax deduction = %d",a-(a*30/100));
    }
    
}