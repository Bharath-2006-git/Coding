#include <stdio.h>

void input_array(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
}

void output_array(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

int binary_search(int a[], int n, int x) {
    int left = 0;
    int right = n - 1;
    while (left <= right) {
        int mid = (right + left) / 2;
        if (a[mid] == x) {
            return mid;
        } else if (a[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int n, x, l;
    printf("Enter array size: ");
    scanf("%d", &n);
    int a[n];
    input_array(a, n);
    printf("Your Array: ");
    output_array(a, n);
    printf("\nEnter element to search: ");
    scanf("%d", &x);
    l = binary_search(a, n, x);
    if (l == -1) {
        printf("Element not found");
    } else {
        printf("Data found at index: %d", l);
    }
    return 0;
}
