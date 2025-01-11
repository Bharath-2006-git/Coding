#include<stdio.h>

void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}

void shellsort(int a[],int n){
    int i,j,k;
    for(i=n/2;i>0;i=i/2){
        for(j=i;j<n;j++){
            for(k=j-i;k>=0;k=k-i){
                if(a[k+i]>=a[k]) break;
                else swap(&a[k],&a[k+i]);
            }
        }
    }
}


void disp(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    int a[50], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    
    for (i = 0; i < n; i++) {
        printf("Enter element %d : ",i+1);
        scanf("%d", &a[i]);
    }

    printf("Initial array: ");
    disp(a, n);

    shellsort(a, n);

    printf("Sorted array: ");
    disp(a, n);

    return 0;
}