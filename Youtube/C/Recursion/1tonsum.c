#include<stdio.h>
void sum(int a,int b){
    if(a==0){
        printf("%d",b);
        return;
    }
    sum(a-1,b+a);
}
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    sum(n,0);
}