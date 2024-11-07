// To count number of characters in given string.
#include<stdio.h>
int main ()
{
    char a[100];
    printf("Enter your name : ");
    scanf("%[^\n]s",a);
    printf("%s",a);
    int count=0;
    for(int i=0;a[i]!='\0';i++){
        count++;
    }
    printf("\nNumber of characters : %d",count);

}