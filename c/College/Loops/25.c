#include <stdio.h>
int main(){
    int s,r,nb;
    s=0;
    nb=0;
    do{
        printf("Enter runs in %d ball:",++nb);
        scanf("%d",&r);
        s=s+r;
        

    }
    while(r!=-1);
    printf("Score = %d",++s);
    printf("\nNumber of balls faced = %d",nb);
    float sr;
    sr=(float)s/nb*100;
    printf("\nStrike rate = %.2f",sr);
}