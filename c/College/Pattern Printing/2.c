// To display following pattern
//  n=3
//   1 1 1
//   2 2 2 
//   3 3 3

#include <stdio.h>
int main(){
    int n;
    printf("Enter number of lines:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%d ",i);
        }
        printf("\n");
    }
}