#include<stdio.h>
int main(){
    int n;
    printf("Enter number of lines:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int d;
        int a=1;
        d=a+64;
        char ch= (char)d;
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




    

    
