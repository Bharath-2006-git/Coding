#include<stdio.h>
#include<string.h>
int main ()
{
    char a[100];
    printf("Enter your name : ");
    scanf("%[^\n]s",a);
    char b[100];
    strcpy(b,a);
    printf("After copy b : %s",b);
    

}