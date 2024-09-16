#include<stdio.h>
int main(){
    char g;
    printf("Enter the gender = ");
    scanf("%c",&g);
    if(g=='m'){
        printf("He");
    }
    else if(g=='f'){
        printf("She");
    }
    else{
        printf("Invalid gender");
    }
}