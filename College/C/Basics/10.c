#include<stdio.h>
int main(){
    int idly,dosa,vada,sum;
    printf("Enter the total no. of plates of Idly = ");
    scanf("%d",&idly);
    printf("Enter the total no. of plates of Dosa = ");
    scanf("%d",&dosa);
    printf("Enter the total no. of plates of Vada = ");
    scanf("%d",&vada);
    sum = 40*idly+50*dosa+60*vada;
    printf("Your Total bill = %d",sum);
}