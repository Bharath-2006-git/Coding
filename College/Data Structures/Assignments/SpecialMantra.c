#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct mantra {
    int symbol;
    struct mantra *l;
} *f, *t, *head = NULL;

typedef struct mantra mantra;

void creation() {
    f = (mantra *)malloc(sizeof(mantra));
    printf("Enter symbol: ");
    scanf("%d", &f->symbol);
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
        printf("No symbol are present\n");
        return;
    }
    t = head;
    printf("Symbols : ");
    while (t != NULL) {
        printf("%d ", t->symbol);
        t = t->l;
    }
    printf("\n");
}

int main() {
    int ch;
    printf("1. Insert\n2. Display\n3. Sort\n4. Exit(0)\n");
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
            // case 3:
            //     sort();
            //     break;
            case 4:
                printf("Program Exited.\n");
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }
}
