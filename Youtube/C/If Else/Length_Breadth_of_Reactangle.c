#include<stdio.h>
int main(){
int l,b,a,p;
a=l*b;
p=2*(l+b);
printf("Enter length = ");
scanf("%d",&l);
printf("Enter breadth = ");
scanf("%d",&b);
if(a>p){
    printf("Greater");
}
    else{
        printf("Smaller");
    }
}