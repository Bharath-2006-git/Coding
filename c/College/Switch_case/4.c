// Q1. Write a c program to implement nested switch case for the followinf scenario 
//     1.Type of food (Three Variety)
//     2. Four Options for type of food

#include <stdio.h>

int main() {
    int n,b,pa,p;
    printf("1.Pizza\n2.Burger\n3.Pasta");
    printf("\nEnter food type:");
    scanf(" %d",&n);
    switch (n)
    {
        case (1):
        printf("1.Chicken pizza\n2.Corn pizza\n3.Paneer pizza\n4.Pepparoni pizza");
        printf("\nPizza type");
        scanf("%d",&p);
        switch(p)
        {
            case(1):
            printf("Here's you freshly prepared chicken pizza");
            break;
            case(2):
            printf("Here's you freshly prepared corn pizza");
            break;
            case(3):
            printf("Here's you fresh paneer pizza");
            break;
            case(4):
            printf("Here's you fresh pepparoni pizza");
            break;
        }
        break;
        case (2):
        printf("1.chicken burger,2.veg burger,3.paneer tikka burger,4.chicken tikka burger");
        printf("\nburger type");
        scanf("%d",&b);
        switch(b)
        {
            case(1):
            printf("Here's you fresh chicken burger");
            break;
            case(2):
            printf("Here's you fresh veg burger ");
            break;
            case(3):
            printf("Here's you fresh paneer tikka burger");
            break;
            case(4):
            printf("Here's you fresh chicken tikka burger");
            break;
        }
        break; 
        case (3):
        printf("1.chicken pasta,2.corn pasta,3.white cream pasta,4.macroni pasta ");
        printf("\n pasta type");
        scanf("%d",&pa);
        switch(pa)
        {
            case(1):
            printf("Here's you fresh chicken pasta");
            break;
            case(2):
            printf("Here's you fresh corn pasta");
            break;
            case(3):
            printf("Here's you fresh white cream pasta");
            break;
            case(4):
            printf("Here's you fresh macroni pasta");
            break;
        }
        break;
        default:
        printf("Invalid food type");
    }
}