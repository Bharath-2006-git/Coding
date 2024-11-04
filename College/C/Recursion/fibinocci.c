#include<stdio.h>
void fib(int n1,int n2,int n){
    int n3;
    if(n1+n2<=n){
        n3=n1+n2;
        printf("%d ",n3);
        fib(n2,n3,n);
    }
}

int main(){
    int n;
    printf("Enter n value : ");
    scanf("%d",&n);
    printf("0 1 ");
    fib(0,1,n);
}