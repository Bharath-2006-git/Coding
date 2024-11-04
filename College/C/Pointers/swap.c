// To swap two numbers by using a function swap 
#include<stdio.h>
void swap(int *p,int *q){
    int r;
    r=*p;
    *p=*q;
    *q=r;
}
int main ()
{   int a,b;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    printf("Before swapping a = %d and b = %d",a,b);
    swap(&a,&b);
    printf("\nAfter swapping a = %d and b = %d",a,b);

}

