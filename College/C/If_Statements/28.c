#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c) {
        if (b > c) {
            printf("Sum of the two largest numbers: %d\n", a + b);
        } else {
            printf("Sum of the two largest numbers: %d\n", a + c);
        }
    } else {
        printf("Sum of the two largest numbers: %d\n", b + c);
    }

    return 0;
}
