#include <stdio.h>
int main(){
    int n1,n2,i;
    printf("Enter from where to where you want 5 multiple:");
    scanf("%d%d",&n1,&n2);
    for(i=n1+1;i<n2;i++){
        if(i%5==0){
        printf("%d\n",i);
    }
}
}

