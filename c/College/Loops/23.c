#include <stdio.h>
int main(){
    int i;
    
    for(i=19;i<=99;i++){
        if(i%10==9 || i/10==9) printf("%d\n",i);
    }
}