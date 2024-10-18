// To count number of positive elements, negative elements and neutral elements in the given array
// Display + if more positive elements are there and vice verse and 0 if more neutral

#include<stdio.h>
int main(){
    int n,i;
    printf("Enter number of elements = ");
    scanf("%d",&n);
    int e[n];
    for(i=0;i<n;i++){
        printf("Enter value of element %d = ",i+1);
        scanf("%d",&e[i]);
    }
    int pc=0,nc=0,z=0;
    for(i=0;i<n;i++){
        if(e[i]>0) pc++;
        else if(e[i]<0) nc++;
        else z++;
    }
    printf("Number of positive = %d\n",pc);
    printf("Number of negative = %d\n",nc);
    printf("Number of neutral  = %d\n",z);
    if(pc>nc&&pc>z) printf("+");
    else if(nc>pc&&nc>z) printf("-");
    else printf("0");
}