// Count no of zeros,odd,even numbers
#include <stdio.h>
int main(){
    int n,zc,ec,oc,i,rem;
    printf("Enter the number =");
    scanf("%d",&n);
    for(zc=0,ec=0,oc=0,i=n;i>0;i=i/10){

        rem=i%10;
        if(rem==0) zc++;
        else if(rem%2==0) ec++;
        else oc++;
    }
    printf("Number of Zeros=%d\nNumber of Odds=%d\nNumber of Even=%d",zc,oc,ec);
}