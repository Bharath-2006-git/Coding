#include <stdio.h>
int main(){
    int a;
    printf("Enter your age = ");
    scanf("%d",&a);
    if(a>=13 && a<=59){
        printf("Entry Valid for ride");
    }
    else{
        printf(" Entry invalid for ride");
    }
}