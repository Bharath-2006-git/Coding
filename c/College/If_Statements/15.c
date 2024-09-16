#include <stdio.h>
int main(){
    float a;
    printf("Enter the number = ");
    scanf("%f",&a);
    if(a>0){
        printf("The number is postive");
    }
    else if(a==0){
        printf("The number is neutral");
    }
    else {printf("The number is negative");}
}