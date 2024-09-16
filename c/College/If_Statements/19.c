#include <stdio.h>
int main(){
    int a;
    printf("Enter the number = ");
    scanf("%d",&a);
    if(a/10==a%10){
        printf("Zig-Zig");
    }
    else if(a/10<a%10){
        printf("Zig-Zag");
    }
    else if(a/10>a%10){
        printf("Zag-Zig");
    }
    
    
}