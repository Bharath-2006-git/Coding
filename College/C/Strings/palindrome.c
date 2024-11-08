#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    printf("Enter name: ");
    scanf("%[^\n]s", a);
    char b[100];
    strcpy(b, a);
    strrev(b);
    if (strcmp(a, b) == 0)
        printf("The entered name is a palindrome\n");
    else
        printf("The entered name is not a palindrome\n");
    return 0;
}
