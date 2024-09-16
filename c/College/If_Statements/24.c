#include <stdio.h>

int main() {
    int age;
    char gender;

    printf("Enter age: ");
    scanf("%d", &age);

    

    printf("Enter gender (m/f): ");
    scanf(" %c", &gender);

    if ((gender == 'f' && age >= 60) || (gender == 'm' && age >= 65)) {
        printf("Allowed for allowance\n");
    } else {
        printf("Not allowed for allowance\n");
    }

    return 0;
}