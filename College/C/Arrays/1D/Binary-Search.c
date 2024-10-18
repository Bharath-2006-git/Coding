#include<stdio.h>
int main(){
    int n,i;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter value of %d element: ",i+1);
        scanf("%d",&a[i]);
    }

    int x;
    printf("Enter the data to be searched: ");
    scanf("%d",&x);
    int s=0;
    int e=n-1;
    int m;
    while(s<=e){
        m=(s+e)/2;
        if(x==a[m]) break;
        else if(x<a[m]) e=m-1;
        else s=m+1;
    }
    if(s<=e) printf("Data found at index %d",m);
    else printf("Data not found");
}