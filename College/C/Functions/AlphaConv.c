// To convert given lower case alphabet to uppercase alphabet and vice-versa
#include<stdio.h>
char change(char ch){
    if(ch>='a'&& ch<='z') ch = ch-32;
    else ch=ch+32;
    return ch;
}
int main(){
    int ch;
    printf("Enter the alphabet : ");
    scanf("%c",&ch);
    printf("Alphabet after conversion : %c",change(ch));
}