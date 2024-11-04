#include<stdio.h>
int gcd(int big,int sml){
    int r=big%sml;
    if(r!=0){
        return gcd(sml,r);
    }
    else return sml;
}
int main(){
    int a,b,g;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    if(a>b){
        g=gcd(a,b);
    }
    else{
        g=gcd(b,a);
    }
    printf("GCD = %d",g);
}