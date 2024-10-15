#include<stdio.h>
int main()
{
  char ch;
  printf("Enter an alphabet:");
  scanf(" %c",&ch);
  switch(ch)
  {
    case ('a'):
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':  
          printf("%c is Vowel ",ch);
          break;
    default:
      printf("%c is consonant",ch);
  }
}