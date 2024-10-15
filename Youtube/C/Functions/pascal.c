#include<stdio.h>
int fact(int z){
    int f=1;
    for(int i=2;i<=z;i++){
        f=f*i;
    }
     return f;
}
int com(int n,int r){
    int q=fact(n)/(fact(r)*fact(n-r));
    return q;
}
int main(){
    int n,i,j;
    printf("Enter n : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            int icj=com(i,j);
            printf("%d ",icj);
        }
        printf("\n");
    }
}


