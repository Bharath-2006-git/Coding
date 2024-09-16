#include <stdio.h>
int main(){
    int a;
    printf("Enter the angle = ");
    scanf("%d",&a);
    if(a<90){
        printf("Triangle is acute");
    }
    else if(a==90){
        printf("Triangle is right angled");

    }
    else {
        printf("Triangle is obtuse");
    }
}