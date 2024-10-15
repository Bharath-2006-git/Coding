// To implement linear search for the array of n given elements

#include<stdio.h>

int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int e[n], x;
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &e[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &x);
    for (i = 0; i < n; i++) {
        if (e[i] == x) {
            printf("Element found at index %d\n", i);
            return 0;
        }
    }
    printf("Element not found\n");
    
}


