// To find second maxium and minimum in given array of n elements
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
    int max1=a[0],max2=a[0],min1=a[0],min2=a[0];
    for(i=0;i<n;i++){
        if(a[i]>max1){
            max2=max1;
            max1=a[i];
        }
        else if(a[i]>max2 && a[i]!=max1) max2=a[i];
        if(a[i]<min1){
            min2=min1;
            min1=a[i];
        }
        else if(a[i]<min2 && a[i]!=min1) min2=a[i];
    }
    printf("Second max : %d\n",max2);
    printf("Second min : %d",min2);
        
    
}