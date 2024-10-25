// To test whether the given number is even or odd
#include<stdio.h>
int Nature(int a){
    return a%2;
}
int main(){
    int n;
    printf("Enter the number = ");
    scanf("%d",&n);
    int a = Nature(n);
    (a==0)?printf("Number is even"):printf("Number is Odd");

}