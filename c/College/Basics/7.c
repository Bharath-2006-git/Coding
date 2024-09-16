#include <stdio.h>
int main(){
    
    int a, a1,a2,sum;
    printf("Enter any 4-digit number: ");
    scanf("%d", &a);
    a1 = a % 10;
    a2 =a / 1000;
    sum = a1 + a2;
    printf("\nSum of the firstdigit and lastdigit is %d", sum);
    return 0;
}
