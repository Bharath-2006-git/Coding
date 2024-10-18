// To accept an array of n employee salaries and display them in regular order and reverse order
#include<stdio.h>
int main(){
    int n,i;
    printf("Enter number of employees:");
    scanf("%d",&n);
    int es[n];
    printf("Enter salary for %d employees:",n);
    for(i=0;i<n;i++){
        scanf("\n%d",&es[i]);
    }
    printf("Salary in regular order:\n");
    for(i=0;i<n;i++){
        printf("%d\n",es[i]);
    }
    printf("Salary in reverse order:");
    for(i=n-1;i>=0;i--){
        printf("\n%d",es[i]);
    }
}