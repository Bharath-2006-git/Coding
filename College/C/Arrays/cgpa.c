// To create an array of n students' cgpa 
// Find number of students having more than 9 cgpa

#include<stdio.h>
int main(){
    int n,i;
    printf("Enter number of students = ");
    scanf("%d",&n);
    float cgpa[n];
    for(i=0;i<n;i++){
        printf("Enter CGPA of Student %d =",i+1);
        scanf("%f",&cgpa[i]);
    }
    int count=0;
    for(i=0;i<n;i++){
        if(cgpa[i]>=9) count++;
    }
    printf("Number of students who got more than 9 cgpa = %d",count);

}