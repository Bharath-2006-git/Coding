#include<stdio.h>
int main(){
    int s1,s2,s3;
    printf("Enter side a = ");
    scanf("%d",&s1);
    printf("Enter side b = ");
    scanf("%d",&s2);
    printf("Enter side c = ");
    scanf("%d",&s3);

    if(s1+s2>s3 && s2+s3>s1 && s1+s3>s2)
    {
        printf("Triangle is valid");
    }
    else
    {
        printf("Triangle is not valid");
        }
    

}