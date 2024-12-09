#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of lines: ");
    scanf("%d",&n);
    int nst=n-1;
    int nsp=1;
    for(int z=1;z<=2*n-1;z++){
        printf("*");
    }
    printf("\n");
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=nst;j++){
            printf("*");
        }
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
        for(int j=1;j<=nst;j++){
            printf("*");
        }
        nsp+=2;
        nst--;
        printf("\n");
    }

}