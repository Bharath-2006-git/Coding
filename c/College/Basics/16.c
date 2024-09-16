#include<stdio.h>
int main(){
    int ng,nb,total;
    float ratio,gratio,bratio;
    printf("Enter number of girls and number of boys = ");
    scanf("%d %d",&ng,&nb);
    total=ng+nb;
    gratio=(float)ng/total;
    bratio=(float)nb/total;
    
    printf("Girls ratio = %.2f",gratio);
    printf("\nBoys ratio = %.2f",bratio);
}