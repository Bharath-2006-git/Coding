// To find top three elements in the array
#include<stdio.h>
int main(){
    int n,i,j,temp;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    for(j=0;j<n;j++){
        printf("Enter value of %d element: ",j+1);
        scanf("%d",&a[j]);
    }
        printf("Before Sorting : ");
        for ( j = 0; j < n; j++)
        {
            printf("%d ",a[j]);
        }
        
        for(i=0;i<n;i++){
            for(j=0;j<n-i;j++){
                if(a[j]>=a[j+1]){
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
        printf("\nAfter Sorting  : ");
        for(j=0;j<n;j++){
            printf("%d ",a[j]);
        }
        printf("Top Three elements = %d %d %d",a[0],a[1],a[2]);
}