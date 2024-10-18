// To create an array of n books cost 
// Find number of books less than 300 rupees
// Between 300 and 500
// Between 500 and 1000
// More than 1000
#include<stdio.h>
int main(){
    int n,i;
    printf("Enter number of books : ");
    scanf("%d",&n);
    int t[n];
    for(i=0;i<n;i++){
        printf("Enter cost of book %d : ",i+1);
        scanf("%d",&t[i]);
    }
    int a=0,b=0,c=0,d=0;
    for(i=0;i<n;i++){
        if(t[i]<300) a++;
        else if(t[i]>=300&&t[i]<500) b++;
        else if(t[i]>=500&&t[i]<=1000) c++;
        else d++;
    }
    printf("Number of books which cost less than 300 rupees: %d\n",a);
    printf("Number of books which cost between 300 and 500: %d\n",b);
    printf("Number of books which cost between 500 and 1000: %d\n",c);
    printf("Number of books which cost more than 1000 rupees: %d\n",d);

}