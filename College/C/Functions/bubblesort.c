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

void sort(int a[],int n){
    int i,j,temp;
    for(i=0;i<n;i++){
            for(j=0;j<n-i;j++){
                if(a[j]>=a[j+1]){
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
        printf("\nAfter Sorting  : ");
        for(j=0;j<n;j++){
            printf("%d ",a[j]);
        }
}
int main(){
    int n,x,l;
    printf("Enter array size : ");
    scanf("%d",&n);
    int a[n];
    input_array(a,n);
    printf("Before Sorting : ");
    output_array(a,n);
    sort(a,n);
}