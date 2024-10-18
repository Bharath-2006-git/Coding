// To display this:
// Even-even
// Even-Odd
// Odd-Even
// Odd-Odd
#include<stdio.h>
int main(){
    int n,i;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter value of element %d : ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(i%2==0 && a[i]%2==0) printf("Even-Even\n");
        else if(i%2==0 && a[i]%2!=0) printf("Even-Odd\n");
        else if(i%2!=0 && a[i]%2==0) printf("Odd-Even\n");
        else printf("Odd-Odd\n");
    }
}