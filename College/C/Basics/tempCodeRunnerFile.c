// // #include <stdio.h>
// // int main(){
// //     int i=1;
// //     if(i--){
// //         printf("Hi i is %d",i);
// //     }
// //     else printf("Bye i is %d",i);
// // }

// #include <stdio.h>
// int main(){
//     int i=1;
//     if(--i){
//         printf("Hi i is %d",i);
//     }
//     else printf("Bye i is %d",i);
// }
#include <stdio.h>
int main(){
    int i=1,j;
    j=i--;
    printf("%d%d",i,j);
}