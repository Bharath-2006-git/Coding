//       *
//     * *   
//   * * *
// * * * *


// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d",&n);
    

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n; j++) {
//             if(j<=n-i) printf("  "); 
//             else printf("* ");
//         }
//         printf("\n");
//     }

// }




// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d",&n);
//     char c='A';

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n; j++) {
//             if(j<=n-i) printf("  "); 
//             else printf("%c ",c++);
//         }
//         printf("\n");
//     }

// }




#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    
    for (int i = 1; i <= n; i++) {
      char c='A';

        for (int j = 1; j <= n; j++) {
            if(j<=n-i) printf("  "); 
            else printf("%c ",c++);
        }
        printf("\n");
    }

}

