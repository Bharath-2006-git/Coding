//    1
//   121
//  12321
// 1234321



#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of lines: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=i-1;
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("%d",k);
        }
        for(int z=1;z<=i-1;z++){
            printf("%d",a);
            a--;
        }
        printf("\n");
    }

}    