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

int binary_search(int a[],int si,int ei,int x){
    int mi;
    if(si<=ei){
        mi=(si+ei)/2;
        if(x==a[mi]) return mi;
        else if(x<a[mi]) binary_search(a,si,mi-1,x);
        else binary_search(a,mi+1,ei,x);
    }
    else return -1;
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
    l=binary_search(a,0,n-1,x);
    if(l==-1) printf("Element not found");
    else printf("Data found at index : %d",l);
}
