#include<stdio.h>
void copy(int n){
    if(n==0) return;
    printf("%d\n",n);
    copy(n-1);
}
int main ()
{
    int n;
    printf("Enter n value: ");
    scanf("%d",&n);
    copy(n);

}