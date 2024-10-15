#include <stdio.h>
int main(){
    int a,b,big,small,rem;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    if(a>b){
        big=a;
        small=b;
    }
    else{
        big=b;
        small=a;   
    }
    do{
        rem = big%small;
        if(rem!=0){
            big = small;
            small = rem;
        }
        
    }
    while(rem!=0);
    printf("GCD of these two number = %d\n",small);
    printf("LCM of these two number = %d",(a*b)/small);
}