#include<stdio.h>
int add(int x,int y){
   return x+y;
}
int main(){
    int a,b;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);
    int c=add(a,b);
    printf("%d",c);
    return 0;
}

// #include<stdio.h>
// int add(int x,int y){
//    return x*y;
// }
// int main(){
    
//     int c=add(5,5);
//     printf("%d",c);
//     return 0;
// }