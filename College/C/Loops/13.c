#include <stdio.h>

int main() {
    int num, sum = 0, divisor = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    while (divisor < num) {
        if (num % divisor == 0) {
            sum += divisor;
        }
        divisor++;
    }

    if (sum == num) {
        printf("%d is a perfect number!\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}


