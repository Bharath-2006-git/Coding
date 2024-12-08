/*         A
         A B
       A B C 
     A B C D    */

#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of lines: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        char ch='A';
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("%c",ch);
            ch++;
        }
        printf("\n");
    }

}     