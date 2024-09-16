// write a c prgram to find whether the given number is even or odd using switch case
// Not possible to use relational operators in switch case
#include <stdio.h>
int main(){
    int n;
    printf("Enter your number :");
    scanf("%d",&n);
    switch (n%2)
    {
        case 0:
        printf("%d is even",n);
        break;
        case 1:
        printf("%d is odd",n);
        break;
    }
    
}
