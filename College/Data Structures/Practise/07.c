#include <stdio.h>

void quicksort(int a[],int low,int high){
    if(low<high){
        int pivot =low;
        int i=low;
        int j=high;
        int temp;
        while(i<j){
            while(a[i]<=a[pivot] && i<high) i++;
            while(a[j]>a[pivot]) j--;
             if(i<j){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
             }
        }
        temp=a[j];
        a[j]=a[pivot];
        a[pivot]=temp;
        quicksort(a,low,j-1);
        quicksort(a,j+1,high);
    }
}

int main() {
    int a[50];
    int n, i;
    printf("Enter the number of elements to sort: ");
    scanf("%d", &n);

    printf("\nEnter elements to sort: \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    quicksort(a, 0, n - 1);

    printf("After sorting: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
