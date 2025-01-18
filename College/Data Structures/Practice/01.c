#include<stdio.h>
int i,j,key;

void display(int a[],int n){
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

void isort(int a[],int n){
    for(i=1;i<n;i++){
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
}

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter %d element: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nArray Before sorting: \n");
    display(a,n);
    isort(a,n);
    printf("Array after sorting: \n");
    display(a,n);
}