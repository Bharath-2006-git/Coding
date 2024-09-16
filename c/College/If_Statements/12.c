#include <stdio.h>

int main() {
    int a;
    printf("Enter the age = ");
    scanf("%d", &a);

    if (a <= 3) {
        printf("Infant\n");
    }
    else if (a<=12) {
        printf("Kid\n");
    }
    else if (a<=19) {
        printf("Teenage\n");
    }
    else if (a<=35) {
        printf("Youth\n");
    }
    else if (a<=60) {
        printf("Middle\n");
    }
    else if (a>60) {
        printf("Senior Citizen\n");
    }

    return 0;
}