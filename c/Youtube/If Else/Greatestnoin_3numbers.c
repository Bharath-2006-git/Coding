#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter the number a = ");
    scanf("%d", &a);
    printf("Enter the number b = ");
    scanf("%d", &b);
    printf("Enter the number c = ");
    scanf("%d", &c);

    if (a > b && a > c) {
        printf("a is greatest\n");
    }
    if (b > a && b > c) {
        printf("b is greatest\n");
    }
    if (c > a && c > b) {
        printf("c is greatest\n");
    }

    return 0;
}