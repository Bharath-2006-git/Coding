#include <stdio.h>
int main(){
    int a;
    printf("Enter college placement percentage = ");
    scanf("%d",&a);
    if(a>=90){
        printf("It's Excellent");
    }
    else if(a>=80){
        printf("It's Good");
    }
    else if(a>=70){
        printf("It's Average");
    }
    else{
        printf("It's Worst");
    }
}