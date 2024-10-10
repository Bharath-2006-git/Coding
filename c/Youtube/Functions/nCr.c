#include<stdio.h>
int fact(int z){
    int f=1;
    for(int i=2;i<=z;i++){
        f=f*i;
    }
     return f;
}
    int main(){
        int n,r;
        printf("Enter n: ");
        scanf("%d",&n);
        printf("Enter r: ");
        scanf("%d",&r);
        int nfact=fact(n);
        int rfact=fact(r);
        int rnfact=fact(n-r);
        int c=nfact/(rfact*rnfact);
        printf("%d",c);
    }
