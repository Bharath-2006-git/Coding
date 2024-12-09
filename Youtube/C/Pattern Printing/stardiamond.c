#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of lines: ");
    scanf("%d",&n);
    if(n%2==0){
        printf("n should be odd to proceed");
        return 0;
    }
    int nsp=n/2; // First line number of spaces
    int nst=1; // First line stars
    int ml= (n/2)+1; // (n/2)+1 is the middle line
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        for(int k=1;k<=nst;k++){
            printf("*");
        }
        if(i<ml){
        nsp--;
        nst+=2;
        }
        else{
        nsp++;
        nst-=2;
        }
        printf("\n");
    }
}