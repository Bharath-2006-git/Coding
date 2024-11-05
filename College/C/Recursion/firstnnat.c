// To find sum of first n natural numbers
#include <stdio.h>

int sumOfNaturalNumbers(int n) {
    if (n == 1)
        return 1;
    return n + sumOfNaturalNumbers(n - 1);
}

int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    int sum = sumOfNaturalNumbers(n);
    printf("Sum of first %d natural numbers: %d\n", n, sum);

    return 0;
}
