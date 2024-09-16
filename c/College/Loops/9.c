#include <stdio.h>
int main(){
    int tn,ts,i,r;
    printf("Enter table number and table size:");
    scanf("%d%d",&tn,&ts);
    i=1;
    while(i<=ts){
        r=tn*i;
        printf("%d*%d=%d\n",tn,i,r);
        i++;
    }
}