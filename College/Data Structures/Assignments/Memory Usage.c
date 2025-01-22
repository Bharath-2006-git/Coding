#include <stdio.h>
#include <stdlib.h>

struct memory {
    int data;
    struct memory *l;
} *f, *t, *head = NULL;

typedef struct memory memory;

void creation() {
    f = (memory *)malloc(sizeof(memory));
    printf("Enter memory usage: ");
    scanf("%d", &f->data);
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
        printf("No memory is used.\n");
        return;
    }
    t = head;
    printf("Memory usage: ");
    while (t != NULL) {
        printf("%d ", t->data);
        t = t->l;
    }
    printf("\n");
}

void findMinMax() {
    if (head == NULL) {
        printf("No memory used\n");
        return;
    }

    int min = head->data;
    int max = head->data;

    t = head->l;
    while (t != NULL) {
        if (t->data < min) {
            min = t->data;
        }
        if (t->data > max) {
            max = t->data;
        }
        t = t->l;
    }

    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);
}

int main() {
    int ch;
    printf("1. Create new memory usage\n2. Display memory usage\n3. Get minimum and maximum memory usage\n4. Exit\n");
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
                findMinMax();
                break;
            case 4:
                printf("Program Exited. Thank You\n");
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }
}
