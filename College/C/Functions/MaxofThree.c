// To find maximum of three given numbers
#include<stdio.h>
int max(int a,int b,int c){
    int max;
    if(a>b&&a>c){
        max=a;
    }
    else{
        if(b>c) max=b;
        else max=c;
    }
    return max;
}

int main(){
    int a,b,c;
    printf("Enter three number : ");
    scanf("%d%d%d",&a,&b,&c);
    printf("Maximun of three numbers : %d",max(a,b,c));
}

