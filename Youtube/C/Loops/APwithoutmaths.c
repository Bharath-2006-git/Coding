//4,7,10,13....
#include <stdio.h>
int main(){
    int n;
    int a=4;
    printf("Enter n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        
        printf("%d\n",a);
        a=a+3;
    }


}