// To multiply two matrices and display the resultant matrix
#include <stdio.h>

int main() {
    int i, j, k;
    int m1, n1, m2, n2;

    printf("Enter the number of rows and columns of Matrix A: ");
    scanf("%d %d", &m1, &n1);
    int a[m1][n1];

    for (i = 0; i < m1; i++) {
        printf("Enter data in row %d:\n", i + 1);
        for (j = 0; j < n1; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Matrix A:\n");
    for (i = 0; i < m1; i++) {
        for (j = 0; j < n1; j++) {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }

    printf("Enter the number of rows and columns of Matrix B: ");
    scanf("%d %d", &m2, &n2);
    int b[m2][n2];

    for (i = 0; i < m2; i++) {
        printf("Enter data in row %d:\n", i + 1);
        for (j = 0; j < n2; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    printf("Matrix B:\n");
    for (i = 0; i < m2; i++) {
        for (j = 0; j < n2; j++) {
            printf("%d  ", b[i][j]);
        }
        printf("\n");
    }

    if (n1 != m2) {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }

    int c[m1][n2];
    for (i = 0; i < m1; ++i) {
        for (j = 0; j < n2; j++) {
            c[i][j] = 0;
            for (k = 0; k < n1; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Resultant matrix after multiplication:\n");
    for (i = 0; i < m1; i++) {
        for (j = 0; j < n2; j++) {
            printf("%d  ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
