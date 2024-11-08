#include<stdio.h>
int main ()
{
    int n,i;
    printf("Enter number of names : ");
    scanf("%d",&n);
    char a[n][50];
    for(i=0;i<n;i++){
        printf("Enter name %d : ",i+1);
        scanf("%s",a[i]);
    }
    for(i=0;i<n;i++){
        printf("\n%s",a[i]);
    }

}