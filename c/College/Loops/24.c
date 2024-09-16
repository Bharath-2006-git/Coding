// #include <stdio.h>
// int main(){
//     int a,n,i;
//     printf("Enter n:");
//     scanf("%d",&n);
//     for(i=0,a=1;i<=n;i++){
//         a=a+i;
//         printf("%d\n",a);
//     }
    
// }

#include <stdio.h>
int main(){
    int a,n,i;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=0,a=1;i<=n;a=a+i){
        ++i;
        printf("%d\n",a);
    }
    
}