// To find area and perimeter of a circle 
#include<stdio.h>
void circle(float r,float *a,float *p){
    *a=3.14*r*r;
    *p=2*3.14*r;
}
int main ()
{
    float r,a,p;
    printf("Enter radius : ");
    scanf("%f",&r);
    circle(r,&a,&p);
    printf("Area = %.2f",a);
    printf("\nPerimeter : %.2f",p);

}