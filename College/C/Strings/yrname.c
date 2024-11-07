// To pass the user to enter his name and display hello user name
#include<stdio.h>
int main ()
{
    char a[100];
    printf("Enter your name : ");
    scanf("%[^\n]s",a);
    printf("Hello ");
    printf("%s",a);

}