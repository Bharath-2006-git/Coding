#include<stdio.h>
#include<string.h>
int main ()
{
    char a[100];
    printf("Enter your name : ");
    scanf("%[^\n]s",a);
    int l=strlen(a);
    printf("Length of string : %d\n",l);
    if(l%2==0) printf("It's an Excellent name\n");
    else printf("It's a Beautiful name");
}