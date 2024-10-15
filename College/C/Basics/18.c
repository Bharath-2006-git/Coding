#include<stdio.h>
int main(){
    int a,b,c;
    float T,a1,b1,c1;
    printf("Enter your marks in course 1 = ");
    scanf("%d",&a);
    printf("Enter your marks in course 2 = ");
    scanf("%d",&b);
    printf("Enter your marks in course 3 = ");
    scanf("%d",&c);
    a1=a*0.5;
    b1=b*0.3;
    c1=c*0.2;
    T=a1+b1+c1;
    printf("Total marks of student = %.2f",T);
    
}