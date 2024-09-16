#include<stdio.h>
int main(){
    int l,p,s;
    float avg;
    printf("Enter l,p,s components marks");
    scanf("%d %d %d",&l,&p,&s);
    avg=(float)(l+p+s)/3;
    printf("Avgerage marks = %.2f",avg);

}