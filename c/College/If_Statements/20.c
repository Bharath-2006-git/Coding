#include<stdio.h>
int main(){
    int s1,s2;
    printf("Enter level 1 score = ");
    scanf("%d",&s1);
    if(s1>=70){
        printf("Enter level 2 score = ");
        scanf("%d",&s2);
        if(s2>70){
            printf("Successfully cleared level 2");

        }
        else{
            printf("Level 2 not cleared");
        }

    }
    else{
        printf("Level 1 not cleared");
    }
}