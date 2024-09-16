// To display the following pattern
// n=4
// 4444
// 3333
// 2222
// 1111

#include <stdio.h>
int main(){
    int n;
    printf("Enter number of lines:");
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        for(int j=1;j<=n;j++){
            printf("%d ",i);
        }
        printf("\n");
    }
}