#include<stdio.h>
#include<string.h>
int main ()
{   int i,j;
    char a[100],b[100];
    printf("Enter string : ");
    scanf("%s",a);
    char l=strlen(a);
    for(i=l-1,j=0;i>=0;i--,j++){
        b[j]=a[i];
    }
    b[j]='\0';
    printf("%s",b);

}