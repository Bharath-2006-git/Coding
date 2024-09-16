#include<stdio.h>
int main(){
    int r,s,a;
    printf("Enter age of R = ");
    scanf("%d",&r);
    printf("Enter age of S = ");
    scanf("%d",&s);
    printf("Enter age of A = ");
    scanf("%d",&a);
    if(r<s&&r<a){
        printf("R is the youngest");
    }
    if(s<r&&s<a){
        printf("S is the youngest");
    }
    if(a<s&&a<r){
        printf("A is the youngest");
    }

}