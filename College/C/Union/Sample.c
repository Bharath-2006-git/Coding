#include<stdio.h>
union sample{
    int x;
    float y;
    char z;
};
typedef union sample sam;
int main(){
    sam s1;
    s1.x=10;
    printf("%d ",s1.x);
    s1.y=3.14;
    printf("\n%.2f",s1.y);
    s1.z='A';
    printf("\n%c",s1.z);
    
}

