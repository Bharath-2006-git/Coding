#include<stdio.h>
int mod(int x,int y){
    printf("%d",x%y);
    return 0;
}
int main(){
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    mod(a,b);

}