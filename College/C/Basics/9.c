#include<stdio.h>
int main(){
    int l,b,a,p;
    printf("Enter length of rectangle = ");
    scanf("%d",&l);
    printf("\nEnter breadth of rectangle = ");
    scanf("%d",&b);
    a=l*b;
    p=2*(l+b);
    printf("\nThe area and perimeter of rectangle are %d and %d",a,p);
}