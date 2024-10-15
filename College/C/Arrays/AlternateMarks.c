// To create an array of n students marks. Let us assume the class contains equal number of boys and girls
// Boys and girls are sitting alternatively 
// Find whose performance is better 
#include<stdio.h>
int main(){
    int n,i;
    printf("Enter Number of Students:");
    scanf("%d",&n);
    if(n%2!=0) printf("Class should be of equal students to proceed further\n");
    else{
    int std[n];
    printf("Enter marks of each student:");
    for(i=0;i<n;i++){
        scanf("%d",&std[i]);
    }
    int bt=0,gt=0;
    for(i=0;i<n;i=i+2){
        bt=bt+std[i];
    }
    for(i=1;i<n;i=i+2){
        gt=gt+std[i];
    }
    (bt>gt)?printf("Boys performed well"):printf("Girls performed well");

}
}