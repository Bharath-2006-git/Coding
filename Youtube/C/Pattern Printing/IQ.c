/* 1
   A B
   1 2 3 
   A B C D
   1 2 3 4 5  */

#include <stdio.h>

int main() {
    int n;
    printf("Enter number of lines: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {

            char ch = 'A';
            for (int j = 1; j <= i; j++) {
                printf("%c ", ch);
                ch++;
            }
        } 
        else {
            
            for (int j = 1; j <= i; j++) {
                printf("%d ", j);
            }
        }
        printf("\n");
    }

    return 0;
}
