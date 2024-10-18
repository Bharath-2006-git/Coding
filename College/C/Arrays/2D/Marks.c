// To create matrix of size m by n where m indicates number of students and 
// n indicated number of subjects. Marks can be float
#include<stdio.h>
int main(){
    int m,n,i,j;
    printf("Enter number of students and number of subjects :");
    scanf("%d%d",&m,&n);
    float a[m][n];
   
    for(i=0;i<m;i++){
        printf("Enter marks for student %d\n",i+1);
        for(j=0;j<n;j++){
            scanf("%f",&a[i][j]);
        }
    }
     printf("Matrix in regular order: \n");
     for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%.2f  ",a[i][j]);
        }
        printf("\n");
     }
     printf("Matrix in tranpose order: \n");
     for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%.2f  ",a[j][i]);
        }
        printf("\n");
     }
}