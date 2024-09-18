//   *
//  * *
// * * *

// If no of rows = n then no of columns = 2*n-1


// #include <stdio.h>

// int main() {
//     int n, i, j, k;
//     printf("Enter the number of lines: ");
//     scanf("%d", &n);

    
//     for (i = 1; i <= n; i++) {
        
//         for (j = 1; j <= n - i; j++) {
//             printf(" ");
//         }
    
//         for (k = 1; k <= 2 * i - 1; k++) {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }






// #include <stdio.h>

// int main() {
//     int n, i, j, k;
//     printf("Enter the number of lines: ");
//     scanf("%d", &n);

    
//     for (i = 1; i <= n; i++) {
        
//         for (j = 1; j <= n - i; j++) {
//             printf(" ");
//         }
    
//         for (k = 1; k <= 2 * i - 1; k++) {
//             printf("%d",i);
//         }
//         printf("\n");
//     }

//     return 0;
// }



// #include <stdio.h>

// int main() {
//     int n, i, j, k;
//     printf("Enter the number of lines: ");
//     scanf("%d", &n);

    
//     for (i = 1; i <= n; i++) {
        
//         for (j = 1; j <= n - i; j++) {
//             printf(" ");
//         }
    
//         for (k = 1; k <= 2 * i - 1; k++) {
//             printf("%d",k);
//         }
//         printf("\n");
//     }

//     return 0;
// }



#include <stdio.h>

int main() {
    int n, i, j, k;
    printf("Enter the number of lines: ");
    scanf("%d", &n);

    
    for (i = 1; i <= n; i++) {
        
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
    
        for (k = 1; k <= 2 * i - 1; k++) {
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}