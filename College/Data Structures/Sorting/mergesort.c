#include <stdio.h>

void merge(int a[], int beg, int mid, int end) {
    int i, j, k;
    int n1 = mid - beg + 1;
    int n2 = end - mid;
    int leftarray[n1], rightarray[n2];

    
    for (i = 0; i < n1; i++) {
        leftarray[i] = a[beg + i];
    }
    for (j = 0; j < n2; j++) {
        rightarray[j] = a[mid + 1 + j];
    }

   
    i = 0;
    j = 0;
    k = beg;
    while (i < n1 && j < n2) {
        if (leftarray[i] <= rightarray[j]) {
            a[k] = leftarray[i];
            i++;
        } else {
            a[k] = rightarray[j];
            j++;
        }
        k++;
    }

    
    while (i < n1) {
        a[k] = leftarray[i];
        i++;
        k++;
    }

    
    while (j < n2) {
        a[k] = rightarray[j];
        j++;
        k++;
    }
}

void mergesort(int a[], int beg, int end) {
    if (beg < end) {
        int mid = (beg + end) / 2;
        mergesort(a, beg, mid);         
        mergesort(a, mid + 1, end);     
        merge(a, beg, mid, end);        
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

    mergesort(a, 0, n - 1);

    printf("Sorted array: ");
    disp(a, n);

    return 0;
}
