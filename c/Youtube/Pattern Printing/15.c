
#include <stdio.h>

int main() {
    int n,i,j;
    printf("Enter number of lines:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*n-1;j++)
        {
            if(j<=n-i)
            {
                printf("  ");
            }
            else if(j<=2*n-i)
            {
                printf("* ");
            }
        }
        printf("\n");
        
    }
}
