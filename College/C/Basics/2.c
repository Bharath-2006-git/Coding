#include <stdio.h>

int main(){
    float s, v;

    printf("Enter Side of cube = ");
    scanf("%f",&s);
    v = s*s*s;
    printf("Volume of the cube is %.1f", v);
    return 0;
    
}