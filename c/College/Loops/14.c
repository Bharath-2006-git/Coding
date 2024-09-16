// Q1 - To find sum of the digits of the given number
// Q2 - Product of the digits of the given number
// Q3 - To count number of digits in given number
// Q4 - To test whether the given number is armstrong number or not
// Q5 - To reverse the given the given number
// Q6 - To test wheatehr the given number is palindrome or not
// Q7 - To test whether the given number is having 0 or not as any one of the digit
// Q8 - To find whether the given number is even controled or odd controlled number(If the sum of the digit is even it is even controlled
//       else odd controlled)
// Q9 - To count even digit number and odd digit number (0 is also even)
// Q10 - To find whether the given is handsome number or not (It is handsome if the number starts and end with same digit)



//  Ans1 // #include <stdio.h>
// int main(){
//     int i,n,sum,rem;
//     printf("Enter the number:");
//     scanf("%d",&n);
//     i=n;
//     sum=0;
    
//     while(i>0){
//         rem=i%10;
//         sum=sum+rem;
//         i=i/10;
//     }
//     printf("Sum of the number = %d",sum);
    
// }





// Ans 2 #include <stdio.h>
//       int main(){
//     int i,n,pdt,rem;
//     printf("Enter the number:");
//     scanf("%d",&n);
//     i=n;
//     pdt=1;
    
//     while(i>0){
//         rem=i%10;
//         pdt=pdt*rem;
//         i=i/10;
//     }
//     printf("Product of the number = %d",pdt);
// }




// Ans 3 - #include <stdio.h>
//     int main(){
//     int i,n,count;
//     printf("Enter the number:");
//     scanf("%d",&n);
//     i=n;
//     count=0;
//     while(i>0){
//         count++;
//         i=i/10;
//     }
//     printf("Number of digits = %d",count);
    
    
//     }




 #include <stdio.h>
 #include <math.h>

    int main(){
    int i,n,count,j,rem,sum,p=0;
    printf("Enter the number:");
    scanf("%d",&n);
    i=n;
    count=0;
    while(i>0){
        count++;
        i=i/10;
    }
    j=n;
    sum=0;
    
    while(j>0){
        rem=j%10;
        p= pow(rem, count);
        sum=sum+p;
        j=j/10;
    }
    printf("Number of digits =%d\n",count);
    printf("Sum of %d power of digits = %d\n",count, sum);
    if(sum==n) printf("Yes this number is Armstrong number\n");
    else printf("No this number is not Armstrong number\n");
    }

    
 


