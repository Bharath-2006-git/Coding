#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int a[n];
    int i,j,key;
    for(i=0;i<n;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&a[i]);
    }

    printf("Array before sorting: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    for (i = 1; i < n; i++) {
    key = a[i];
    j = i - 1;

    while (j >= 0 && a[j] > key) {
        a[j + 1] = a[j];
        j = j - 1;
    }
    a[j + 1] = key;
}

    printf("\nArray after sorting: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

}