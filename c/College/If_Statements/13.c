#include <stdio.h>
int main(){
    int t;
    printf("Enter thee temperature = ");
    scanf("%d",&t);
    if(t<=10){
        printf("Very cold");
    }
    else if(t<=20){
        printf("Cold");
    }
    else if(t<=30){
        printf("Warm");
    }
    else if(t<=40){
        printf("Hot");
    }
    else if(t>40){
        printf("Very Hot");

    }
}