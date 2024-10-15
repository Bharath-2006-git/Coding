#include <stdio.h>
int main(){
    int s1,s2,s3;
    printf("Enter 3 sides = ");
    scanf("%d %d %d",&s1,&s2,&s3);
    if(s1==s2&&s1==s3){
        printf("Equi triangle");
    }
    else if(s1==s2||s2==s3||s1==s3){
        printf("Iso trianlge");
    }
    else{
        printf("Scalene triangle");
    }
}