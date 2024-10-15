#include <stdio.h>
int main(){
    char a;
    printf("Enter the alphabet = ");
    scanf(" %c",&a);
    if((a=='a')||(a=='e')||(a=='i')||(a=='o')||(a=='u')){
printf("It's a vowel");
    }
    else{
        printf("It's not a vowel");
    }
}