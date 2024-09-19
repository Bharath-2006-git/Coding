// To generate all prime numbers between two given numbers
#include<stdio.h>
int main(){
    int a,b,n,i,c=0;
    printf("Enter two number:");
    scanf("%d%d",&a,&b);
    for(n=a;n<=b;n++){
        for(i=2;i<=n/2;i++){
            if(n%i==0){
                break;
            }
        }
        if(!(i<=n/2)){
            printf("%d\n",n);
            c++;
        }
    }
    printf("Number of prime numbers = %d",c);
}