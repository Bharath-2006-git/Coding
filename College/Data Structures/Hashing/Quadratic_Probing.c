#include <stdio.h>
#include <stdlib.h>
#define s 10
int a[s] = {0};

void insert() {
    int val, j, i, k;
    printf("\nEnter a value to insert into hash table: ");
    scanf("%d", &val);
    k = val % s;
    for (i = 0; i < s; i++) {
        j = (k + i*i) % s;
        if (a[j] == 0) {
            a[j] = val;
            break;
        }
    }
    if (i == s)
        printf("\nElement cannot be inserted\n");
}

void display() {
    int i;
    printf("\nElements in the hash table are:\n");
    for (i = 0; i < s; i++) {
        if (a[i] == 0)
            printf("\nAt index %d \t Value = EMPTY", i);
        else
            printf("\nAt index %d \t Value = %d", i, a[i]);
    }
}

int main() {
    printf("\n1. Insert\n2. Display\n3. Exit\n");
    int ch;
    while (1) {
        printf("\nEnter choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                insert();
                break;
            case 2:
                display();
                break;
            case 3:
                exit(0);
                break;
            default:
                printf("\nInvalid choice, please try again.\n");
        }
    }
    return 0;
}
