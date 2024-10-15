// To generate all two digit prime numbers
#include<stdio.h>
int main(){
    int n,i,c=0;
   
   
    for(n=10;n<=100;n++){
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