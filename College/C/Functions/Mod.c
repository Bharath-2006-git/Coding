#include<stdio.h>
int mod(int x,int y){
    return x%y;
}
int main(){
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    int r=mod(a,b);
    printf("%d",r);


}