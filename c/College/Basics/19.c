#include <stdio.h>
int main(){
    char ch;
    printf("Enter  a character = ");
    scanf("%c",&ch);
    printf("In character form %c",ch);
    printf("\nIn ASCII form %d",ch);
    printf("\nIn lower case forrm %c",ch+32);
    printf("\nPosition of %c is %d",ch,ch-64);

    
}