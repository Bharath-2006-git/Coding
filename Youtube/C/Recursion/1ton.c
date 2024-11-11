#include<stdio.h>
void copy(int n){
    if(n==0) return;
    copy(n-1);
    printf("%d\n",n);
}
int main ()
{
    int n;
    printf("Enter n value: ");
    scanf("%d",&n);
    copy(n);

}