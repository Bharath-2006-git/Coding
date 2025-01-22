#include <stdio.h>
#include <stdlib.h>

struct traffic {
    int number;
    struct traffic *l;
} *f1, *t1, *head1 = NULL, *f2, *t2, *head2 = NULL;

typedef struct traffic traffic;

void creation() {
    f1 = (traffic *)malloc(sizeof(traffic));
    printf("Enter vehicle number: ");
    scanf("%d", &f1->number);
    f1->l = NULL;
    if (head1 == NULL) {
        head1 = f1;
    } else {
        t1->l = f1;
    }
    t1 = f1;
}

void display() {
    if (head1 == NULL) {
        printf("The road is empty.\n");
        return;
    }
    t1 = head1;
    printf("Vehicles on the road are: ");
    while (t1 != NULL) {
        printf("%d ", t1->number);
        t1 = t1->l;
    }
    printf("\n");
}

void reverse() {
    if (head1 == NULL) {
        printf("The road is empty. Nothing to reverse.\n");
        return;
    }

    head2 = NULL;
    t1 = head1;

    while (t1 != NULL) {
        f2 = (traffic *)malloc(sizeof(traffic));
        f2->number = t1->number;
        f2->l = head2;
        head2 = f2;
        t1 = t1->l;
    }

    printf("Reversed list of vehicles: ");
    t2 = head2;
    while (t2 != NULL) {
        printf("%d ", t2->number);
        t2 = t2->l;
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
                printf("Task accomplished. Exiting the program.\n");
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }
}
