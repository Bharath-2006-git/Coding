#include <stdio.h>

int main() 
{
    float a;
    char t;
    printf("enter food amount ,customer type:");
    scanf("%f %c",&a,&t);
    if((t=='g')||(t=='G'))
    {
        if(a<1000)
        {
            printf("the zomato bill is %.2f",(a-(a*0.10)));
        }
        else if (a<=2000)
        {
             printf("the zomato bill is %.2f",(a-(a*0.15)));
        
        }
        else 
        {
             printf("the zomato bill is %.2f",(a-(a*0.20)));
        
        }
    }
    else if((t=='s')||(t=='S'))
    {
        if(a<1000)
        {
             printf("the zomato bill is %.2f",(a+50));
        
        }
        else if (a<=2000)
        {
             printf("the zomato bill is %.2f",(a+75-(a*0.10)));
        
        }
        
        else 
        {
             printf("the zomato bill is %.2f",(a+100-(a*0.20)));
        
        }
    }
    else if ((t=='b')||(t=='B'))
    {
        if(a<1000)
        {
             printf("the zomato bill is %.2f",(a+100));
        
        }
        else if (a<=2000)
        {
             printf("the zomato bill is %.2f",(a+150-(a*0.05)));
        
        }
        
        else 
        {
             printf("the zomato bill is %.2f",(a+200-(a*0.10)));
        
        }
    }
    else 
    {
        printf("invalid customer type");
    }
}
