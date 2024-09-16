#include <stdio.h>

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    
    if (n % 5 == 0 && n % 3 == 0) {
        printf("Number is divisible by both 3 and 5.\n");
    } else {
        printf("Number is not divisible by both 3 and 5.\n");
    }
    
    return 0;
}