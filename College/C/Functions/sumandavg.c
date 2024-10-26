#include<stdio.h>
int sum(int a,int b,int c){
    return a+b+c;
}

int avg(int a,int b,int c){
    return (a+b+c)/3;
}

int main(){
    int a,b,c;
    printf("Enter three number : ");
    scanf("%d%d%d",&a,&b,&c);
    printf("The sum of these numbers : %d\n",sum(a,b,c));
    printf("The avg of these numbers : %d",avg(a,b,c));

}