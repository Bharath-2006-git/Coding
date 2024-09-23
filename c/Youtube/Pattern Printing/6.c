#include <stdio.h>

int main() {
    int n; 
    printf("Enter no of lines:");
    scanf("%d",&n);
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 1) {
            // Print numbers
            for (int j = 1; j <= i; ++j) {
                printf("%d ", j);
            }
        } else {
            // Print letters
            char letter = 'A';
            for (int j = 1; j <= i; ++j) {
                printf("%c ", letter);
                ++letter;
            }
        }
        printf("\n");
    }

    return 0;
}
