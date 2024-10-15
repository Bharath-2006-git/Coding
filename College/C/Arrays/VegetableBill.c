// To create two arrays of size n.
// First array contain cost of vegetable
// Second array contain quantity of vegetable
#include<stdio.h>
int main(){
    int n,i;
    printf("Enter number of vegetables:");
    scanf("%d",&n);
    int p[n];
    printf("Enter price of each vegetable:");
    for(i=0;i<n;i++){
        scanf("%d",&p[i]);
    }
    int q[n];
    printf("Enter quantity of each vegetable:");
    for(i=0;i<n;i++){
        scanf("%d",&q[i]);
    }
    int t=0;
    for(i=0;i<n;i++){
        t=t+p[i]*q[i];
    }
    printf("Total bill: %d",t);
    
}