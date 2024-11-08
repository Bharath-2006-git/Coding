#include<stdio.h>
#include<string.h>
int main ()
{
    char a[100];
    printf("Enter your name : ");
    scanf("%[^\n]s",a);
    char b[100];
    printf("Enter friend name : ");
    scanf(" %[^\n]s",b);
    int l;
    l=strcmp(b,a);
    if(l<0) printf("%s\n%s",b,a);
    else if(l>0) printf("%s\n%s",a,b);
    else printf("%s\n%s",a,b);

}