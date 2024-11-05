// To find max and min
#include<stdio.h>
void value(int a,int b,int *max,int *min){
    if(a>b){
        *max=a;
        *min=b;
    }
    else{
        *max=b;
        *min=a;
    }
}
int main ()
{
    int a,b,max,min;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    value(a,b,&max,&min);
    printf("Max = %d",max);
    printf("\nMin = %d",min);

}