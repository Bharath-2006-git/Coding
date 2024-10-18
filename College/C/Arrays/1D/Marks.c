// To accept an array of n stduent marks and display them in regular order and reverse order

#include<stdio.h>
int main(){
    int n,i;
    printf("Enter number of students:");
    scanf("%d",&n);
    int students[n];
    printf("Enter marks for %d students:",n);
    for(i=0;i<n;i++){
    scanf("%d",&students[i]);
    }
    printf("Marks in regular order are as follows:\n");
    for(i=0;i<n;i++){
        printf("%d\n",students[i]);
    }
    printf("Marks in reverse order are as follows:\n");
    for(i=n-1;i>=0;i--){
        printf("%d\n",students[i]);
    }
    


}