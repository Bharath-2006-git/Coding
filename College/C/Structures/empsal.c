//  To define a structure employee having three members employee id, name, salary.
//  Create an array of n employees and find the total salary of all employees together 
//  Also find min and max salary

#include<stdio.h>
struct employee{
    int id;
    char name[20];
    int sal;
};
int main(){
    int n,i;
    printf("Enter number of employees: ");
    scanf("%d",&n);
    struct employee e[n];
    for(i=0;i<n;i++){
        printf("\nEnter ID number of employee %d: ",i+1);
        scanf("%d",&e[i].id);
        printf("\nEnter employee %d name: ",i+1);
        scanf(" %[^\n]s",&e[i].name);
        printf("\nEnter employee %d salary: ",i+1);
        scanf("%d",&e[i].sal);
    }
    printf("\nEmployee Information:");
    for(i=0;i<n;i++){
        printf("\n%d  %s  %d",e[i].id,e[i].name,e[i].sal);
    }
    printf("\n");
    int tsal=0;
    for(i=0;i<n;i++){
        tsal=tsal+e[i].sal;
    }
    printf("\nTotal cost to company: %d",tsal);
    int max=e[0].sal;
    int min=e[0].sal;
    for(i=0;i<n;i++){
        if(e[i].sal>max) max=e[i].sal;
        if(e[i].sal<min) min=e[i].sal;
    }
    printf("\nMax salary is %d and min salary is %d ",max,min);
}