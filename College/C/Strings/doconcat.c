#include<stdio.h>
#include<string.h>
int main ()
{
    char a[100];
    printf("Enter first name : ");
    scanf("%[^\n]s",a);
    char b[100];
    printf("Enter second name : ");
    scanf(" %[^\n]s",b);
    char name[100];
    strcpy(name,a);
    strcat(name,b);
    printf("Your name is %s",name);

}