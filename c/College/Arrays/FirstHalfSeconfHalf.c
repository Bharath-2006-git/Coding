// Same question but first half is boys and second half is girls
#include <stdio.h>
int main(){
    
    int n,i;
    printf("Enter number of students:");
    scanf("%d",&n);
    int std[n];
    if(n%2!=0) printf("Error");
    else{
    printf("Enter marks of each stdents:");
    for(i=0;i<n;i++){
        scanf("%d",&std[i]);
    }
    int bt=0,gt=0;
    for(i=0;i<n/2-1;i++){
        bt=bt+std[i];
    }
    for(i=n/2;i<n-1;i++){
        gt=gt+std[i];
    }
    (bt>gt)?printf("Boys performed well"):printf("Girls performed well");

}
}