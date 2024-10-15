#include <stdio.h>

int main() {
    int n, i, s;
    printf("Enter the number: ");
    scanf("%d", &n);
    i = 1;
    s = 0;
    while (i <= n) {
        s = s + i;  // Accumulate the actual values
        i++;
    }
    printf("Sum of the first %d positive integers: %d\n", n, s);
    return 0;
}
