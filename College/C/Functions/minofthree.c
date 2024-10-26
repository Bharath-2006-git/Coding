#include<stdio.h>
int min(int a,int b,int c){
    int min;
    if(a<b&&a<c) min=a;
    else if(b<c) min=b;
    else min=c;
    return min;
}
int main(){
    int a,b,c;
    printf("Enter three number : ");
    scanf("%d%d%d",&a,&b,&c);
    int m=min(a,b,c);
    printf("The minimum of the numbers is %d",m);
}