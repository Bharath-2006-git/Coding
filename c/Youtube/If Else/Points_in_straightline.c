#include <stdio.h>
int main(){
    double x1,x2,x3,y1,y2,y3,m1,m2;
    printf("Enter values of x1 = ");
    scanf("%lf",&x1);
    printf("Enter values of x2 = ");
    scanf("%lf",&x2);
    printf("Enter values of x3 = ");
    scanf("%lf",&x3);
    printf("Enter values of y1 = ");
    scanf("%lf",&y1);
    printf("Enter values of y2 = ");
    scanf("%lf",&y2);
    printf("Enter values of y3 = ");
    scanf("%lf",&y3);
    m1=(y2-y1)/(x2-x1);
    m2=(y3-y2)/(x3-x2);
    if(m1==m2){
        printf("All three points lie on same line");
    }
    else{
        printf("All three points do not lie on same line");
    }

}