// To insert a new element x at the given index 
#include <stdio.h>

int main() {
    int n, index, x;
    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the index where you want to insert the new element: ");
    scanf("%d", &index);

    printf("Enter the element to insert: ");
    scanf("%d", &x);

    // Shift elements to the right to make space for the new element
    for (int i = n; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element at the specified index
    arr[index] = x;
    n++; // Increase the array size

    printf("Updated array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
