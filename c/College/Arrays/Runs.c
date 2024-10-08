// To create an array of n players runs in a cricket match and find the total score and also 
// find the average score.

#include <stdio.h>

int main() {
    int n, i, klt = 0, gtmt = 0;
    printf("Enter number of players: ");
    scanf("%d", &n);

    int kl[n];
    printf("\nEnter runs scored by each KL player:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &kl[i]);
    }

    int gtm[n];
    printf("\nEnter runs scored by each Gitam player:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &gtm[i]);
    }

    for (i = 0; i < n; i++) {
        klt += kl[i];
    }

    for (i = 0; i < n; i++) {
        gtmt += gtm[i];
    }

    printf("\nTotal score of KL = %d", klt);
    printf("\nTotal score of Gitam = %d", gtmt);

    float avg_kl = (float)klt / n;
    float avg_gtm = (float)gtmt / n;

    printf("\nAverage score of KL = %.2f", avg_kl);
    printf("\nAverage score of Gitam = %.2f", avg_gtm);

    if (klt > gtmt) printf("\nKL Won");
    else if (klt < gtmt) printf("\nGitam Won");
    else printf("\nIt's a draw");

    return 0;
}
