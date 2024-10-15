#include <stdio.h>
int main(){
    int i=5,j=5,k=5,l;
    l=(++i)+(j++)+(++k);
    printf("%d\n%d\n%d\n%d",i,j,k,l);
}