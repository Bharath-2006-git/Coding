// #include<stdio.h>
// void swap(int *a,int *b){
//     int t=*a;
//     *a=*b;
//     *b=t;
// }
// int partition(int arr[],int low,int high){
//     int pivot=arr[high];
//     int i=low-1;
//     for(int j=low;j<=high-1;j++){
//         if(arr[j]<pivot){
//             i++;
//             swap(&arr[i],&arr[j]);
//         }
//     }
//     swap(&arr[i+1],&arr[high]);
//     return(i+1);
// }
// void quicksort(int arr[],int low,int high){
//     if(low<high){
//         int pi=partition(arr,low,high);
//         quicksort(arr,low,pi-1);
//         quicksort(arr,pi+1,high);
        
//     }
// }

// void display(int arr[],int size){
//     int i;
//     for(i=0;i<size;i++) printf("%d ",arr[i]);
//     printf("\n");
// }

// int main(){
//     int arr[50],n,i;
//     printf("Enter size of array: ");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         printf("Enter element %d: ",i+1);
//         scanf("%d",&arr[i]);
//     }
//     printf("Before sorting: \n");
//     display(arr,n);
//     quicksort(arr,0,n-1);
//     printf("After sorting: \n");
//     display(arr,n);
//     return 0;
// }




#include <stdio.h>

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low + 1;

    for (int j = low + 1; j <= high; j++) {
        if (arr[j] < pivot) {
            swap(&arr[i], &arr[j]);
            i++;
        }
    }

    swap(&arr[low], &arr[i - 1]);
    return (i - 1);
}

void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

void display(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[50], n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Before sorting: \n");
    display(arr, n);

    quicksort(arr, 0, n - 1);

    printf("After sorting: \n");
    display(arr, n);

    return 0;
}
