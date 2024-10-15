#include<stdio.h>
int main(){
    int a,b,c,d,e,f,T;
    float SR;
    printf("Enter no of six = ");
    scanf("%d",&a);
    printf("Enter no of four = ");
    scanf("%d",&b);
    printf("Enter no of three = ");
    scanf("%d",&c);
    printf("Enter no of two = ");
    scanf("%d",&d);
    printf("Enter no of one = ");
    scanf("%d",&e);
    printf("Enter no of dot ball = ");
    scanf("%d",&f);
    SR=(float)(a*6+b*4+c*3+d*2+e*1+f*0)*100/(a+b+c+d+e+f);
    T=a*6+b*4+c*3+d*2+e*1+f*0;
    printf("Strike Rate = %.2f and Total runs = %d",SR,T);

}