// To delete and element given by the user
#include <stdio.h>

int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int index;
    printf("Enter the index of the element to delete: ");
    scanf("%d", &index);

    if (index < 0 || index >= n) {
        printf("Invalid index. Cannot delete element.\n");
    } else {
        // Shift elements to the left to overwrite the element at the specified index
        for (int i = index; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--; // Decrease the array size

        printf("Element at index %d deleted successfully.\n", index);
    }

    printf("Updated array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
