
#include <stdio.h>

int main() {
    int n,i,j,k;
    printf("Enter number of lines:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {   int a=1;
        for(j=1;j<=n-i;j++)
        {
           printf(" ");
        }
        for(k=1;k<=2*i-1;k++){
            printf("%d",a);
            a++;
        }
        printf("\n");
        
    }
}
