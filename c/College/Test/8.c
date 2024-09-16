#include <stdio.h>

int main() {
    char brand, gl;
    printf("Enter the brand of laptop (D for Dell, H for HP, L for Lenovo): ");
    scanf(" %c", &brand);
    printf("Do you need a gaming laptop with a graphics card? (y for Yes, n for No): ");
    scanf(" %c", &gl);

    if ((brand == 'D' || brand == 'd') && (gl == 'y' || gl == 'Y')) {
        printf("Consider buying a Dell gaming laptop.\n");
    } else if ((brand == 'H' || brand == 'h') && (gl == 'y' || gl == 'Y')) {
        printf("Consider buying an HP gaming laptop.\n");
    } else if ((brand == 'L' || brand == 'l') && (gl == 'y' || gl == 'Y')) {
        printf("Consider buying a Lenovo gaming laptop.\n");
    } else {
        printf("Buy Regular Laptop of another company.\n");
    }

    return 0;
}
