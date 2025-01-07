#include <stdio.h>
#include <stdlib.h>

struct traffic {
    int number;
    struct traffic *l;
} *f, *t, *head = NULL;

typedef struct traffic traffic;

void creation() {
    f = (traffic *)malloc(sizeof(traffic));
    printf("Enter vehicle number: ");
    scanf("%d", &f->number);
    f->l = NULL;
    if (head == NULL) {
        head = f;
    } else {
        t->l = f;
    }
    t = f;
}

void display() {
    if (head == NULL) {
        printf("The road is empty\n");
        return;
    }
    t = head;
    printf("Vehicles on the road are : ");
    while (t != NULL) {
        printf("%d ", t->number);
        t = t->l;
    }
    printf("\n");
}


int main() {
    int ch;
    printf("1. Insert\n2. Display\n3. Reverse\n4. Exit(0)\n");
    while (1) {
        printf("\nEnter Choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                creation();
                break;
            case 2:
                display();
                break;
            case 3:
                reverse();
                break;
            case 4:
                printf("Program Exited.\n");
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }
}
