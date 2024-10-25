// To find Area and Perimeter of a rectangle
#include<stdio.h>
int area(int a,int b){
    return a*b;
}
int peri(int a,int b){
    return 2*(a+b);
}
int main(){
    int a,b;
    printf("Enter length and breadth of rectangle : ");
    scanf("%d%d",&a,&b);
    int x=area(a,b);
    int y=peri(a,b);
    printf("Area and Perimeter of rectangle : %d and %d",x,y);

}