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


// To find how many times a given element is found in the array

// #include<stdio.h>
// int main(){
//     int n,i;
//     printf("Enter number of Elements: ");
//     scanf("%d",&n);
//     int a[n];
//     for(i=0;i<n;i++){
//         printf("Enter element %d value: ",i+1);
//         scanf("%d",&a[i]);
//     }
//     int x;
//     printf("Enter the element to search: ");
//     scanf("%d",&x);
//     int count=0;
//     for(i=0;i<n;i++){
//       if(a[i]==x) count++;
//     }
//     printf("Number of times data found: %d",count);
// }
