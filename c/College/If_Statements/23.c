#include <stdio.h>
int main()
{   float c1,c2,c3;
    printf("Enter the distance of c1 =  ");
    scanf("%f",&c1);
    printf("Enter the distance of c2 =  ");
    scanf("%f",&c2);
    printf("Enter the distance of c3 =  ");
    scanf("%f",&c3);
    if(c1>80 || c2>80 || c3>80){
        printf("Qualified for Olympics");
    }
    else{
        printf("Not qualified for Olympics");
    }


}