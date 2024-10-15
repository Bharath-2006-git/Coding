#include<stdio.h>
int main(){
    int a;
    printf("Enter marks of student = ");
    scanf("%d",&a);
    if(a>=90){
        printf("Outstanding");

    }
    else if(a>=80 && a<90){
        printf("A+");
    }
    else if(a>=70 && a<80){
        printf("A");}
    else if(a>=60 && a<70){
        printf("B");
    }
    else if(a>=50 && a<60){
        printf("C");
    }
    else if(a<50){
        printf("F");
    }}
    
