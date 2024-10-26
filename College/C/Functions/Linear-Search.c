#include<stdio.h>

void input_array(int a[],int n){
    for(int i=0;i<n;i++){
        printf("Enter element %d : ",i+1);
        scanf("%d",&a[i]);
    }
}
void output_array(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
int linear_search(int a[],int n,int x){
    for(int i=0;i<n;i++){
        if(x==a[i]) return i;
    }
    return -1;
}
int main(){
    int n,x,l;
    printf("Enter array size : ");
    scanf("%d",&n);
    int a[n];
    input_array(a,n);
    printf("Your Array : ");
    output_array(a,n);
    printf("\nEnter element to search : ");
    scanf("%d",&x);
    l=linear_search(a,n,x);
    if(l==-1) printf("Element not found");
    else printf("Data found at index : %d",l);
}
