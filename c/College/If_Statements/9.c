#include <stdio.h>
int main() {
    float cgpa;
    printf("Enter CGPA of student = ");
    scanf("%f",&cgpa);
    if(cgpa>8.5){
        printf("He can participate in placements");
    }
    else{
        printf("He can't participate in placements");
    }
    
}
