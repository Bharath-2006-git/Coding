#include <stdio.h>
int main(){
    int choice;
    printf("1.English\n2.Hindi\n3.Telugu\n4.Tamil\n");
    printf("Enter your language:");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("Hello\n");
        break;
        case 2:
        printf("Namaste\n");
        break;
        case 3:
        printf("Namaskaram\n");
        break;
        case 4:
        printf("Vanakkam\n");
        break;
        default:
        printf("Invalid Choice");
        
    }
}