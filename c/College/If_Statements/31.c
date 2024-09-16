#include <stdio.h>
int main(){
    int a;
    printf("Enter age = ");
    scanf("%d",&a);
    if(!(a<18)){
        printf("He can vote");
    }
    else{
        printf("He can't vote");
    }
}