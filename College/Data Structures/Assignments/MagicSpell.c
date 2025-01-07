#include <stdio.h>
#include <stdlib.h>

struct spell {
    char alpha[20];
    struct spell *l;
} *f, *t, *head = NULL;

typedef struct spell spell;

void creation() {
    f = (spell *)malloc(sizeof(spell));
    printf("Enter alphabet: ");
    scanf("%s", &f->alpha);
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
        printf("No magic word is present\n");
        return;
    }
    t = head;
    printf("Magic Word : ");
    while (t != NULL) {
        printf("%s", t->alpha);
        t = t->l;
    }
    printf("\n");
}

int main() {
    int ch;
    printf("1. Insert Magic Spell letter\n2. Display Magic word\n3. isMagical\n4. Exit(0)\n");
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
            //     isMagical();
            //     break;
            case 4:
                printf("Program Exited.\n");
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }
}
