#include <stdio.h>
int main(){
    int a,b;
    printf("Enter a and b = ");
    scanf("%d %d",&a,&b);
    (a<b)?printf("The differnece is %d",b-a):printf("The differnece is %d",a-b);
}
