// To define a structure a employee with three members, empid(int), emname(char), sal(float).
#include<stdio.h>
struct employee{
        int eno;
        char ename[20];
        float sal;
    };
int main()
{
  struct employee e1;
  printf("Enter employee e1 information: ");
  scanf("%d",&e1.eno);
  scanf(" %[^\n]s",&e1.ename);
  scanf("%f",&e1.sal);
  printf("e1 information is: ");
  printf("%d  %s  %.2f",e1.eno,e1.ename,e1.sal);
  (e1.sal>30000)?printf("\nIT is there"):printf("\nIT is not there");

}