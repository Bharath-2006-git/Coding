// To find how many times a given number can be divided exactly by 2.
#include <stdio.h>

int main() {
    int number;
    int count = 0; 
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    while (number % 2 == 0) {
        number /= 2;
        count++;
    }

    printf("The given number can be divided by 2 exactly %d times.\n", count);

    return 0;
}
