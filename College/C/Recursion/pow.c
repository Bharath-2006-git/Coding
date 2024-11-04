#include<stdio.h>
int power(int a,int b){
    if(b==0) return 1;
    else return a*power(a,b-1);
}
int main(){
    int a,b,f;
    printf("Enter a number and its power : ");
    scanf("%d%d",&a,&b);
    f=power(a,b);
    printf("Factorial = %d",f);
}