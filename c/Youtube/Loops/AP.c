// AP of 1,3,5,7.... upto n terms
// a=1,d=2, nth term = a+(n-1)d
// Here nth term = 1+(n-1)2 = 2n-1
#include <stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    for(int i=1;i<=2*n-1;i=i+2){
        printf("%d\n",i);
    }


}