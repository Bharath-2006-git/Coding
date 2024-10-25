// To reverse a given number 
#include<stdio.h>
void rev(int a,int b){
    int temp=a;
    a=b;
    b=temp;
    printf("After reversing  : a = %d and b = %d",a,b);
}

int main(){
    int a,b;
    printf("Enter two number : ");
    scanf("%d%d",&a,&b);
    printf("Before Reversing : a = %d and b = %d\n",a,b);
    rev(a,b);
    
}