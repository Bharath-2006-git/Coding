#include <stdio.h>

int main() {
    int m, n, i, j, row, sum;
    printf("Enter rows and columns: ");
    scanf("%d%d", &m, &n);
    int a[m][n];
    for (i = 0; i < m; i++) {
        printf("Enter values in row %d: ", i + 1);
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int maxSum = 0;
    int maxSumRow = 0;
    for (i = 0; i < m; i++) {
        sum = 0;
        for (j = 0; j < n; j++) {
            sum += a[i][j];
        }
        if (sum > maxSum) {
            maxSum = sum;
            maxSumRow = i;
        }
    }

    printf("Row %d has maximum sum\n", maxSumRow + 1); 

    return 0;
}
