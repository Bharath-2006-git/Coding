// To define a structure student having four members, stdid,stdname,branch,cgpa
// Create two structure variables take input from the user and find the name of the student who got maximum cgpa
#include <stdio.h>
struct student{
    int stdid;
    char stdname[20];
    char branch[20];
    float cgpa;
};
int main(){
    struct student s1,s2;
    printf("Enter information of student 1: ");
    scanf("%d",&s1.stdid);
    scanf(" %[^\n]s",&s1.stdname);
    scanf(" %[^\n]s",&s1.branch);
    scanf("%f",&s1.cgpa);
    printf("\nEnter information of student 2: ");
    scanf("%d",&s2.stdid);
    scanf(" %[^\n]s",&s2.stdname);
    scanf(" %[^\n]s",&s2.branch);
    scanf("%f",&s2.cgpa);
    printf("\nStudents information: ");
    printf("\n%d %s %s %.1f",s1.stdid,s1.stdname,s1.branch,s1.cgpa);
    printf("\n%d %s %s %.1f",s2.stdid,s2.stdname,s2.branch,s2.cgpa);
    (s1.cgpa>s2.cgpa)?printf("\n%s has better cgpa",s1.stdname):printf("\n%s has better cgpa",s2.stdname);


}