// Find the difference and sum between max and min 

#include<stdio.h>
int main(){
    int n,i;
    printf("Enter number of students : ");
    scanf("%d",&n);
    int z[n];
    for(i=0;i<n;i++){
        printf("Enter cgpa of student %d : ",i+1);
        scanf("%d",&z[i]);
    }
    int max=z[0],min=z[0];
    for(i=0;i<n;i++){
        if(z[i]>max) max=z[i];
        if(z[i]<min) min=z[i];
    }
    printf("Highest CGPA : %d\n",max);
    printf("Lowest CGPA : %d\n",min);
    printf("Sum of Max and Min : %d\n",max+min);
    printf("Difference of Max and Min : %d\n",max-min);
} 