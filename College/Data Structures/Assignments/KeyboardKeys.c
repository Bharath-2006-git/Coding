#include <stdio.h>
#include <stdlib.h>

struct keyboard {
    int key;
    struct keyboard *l;
} *f, *t, *head = NULL;

typedef struct keyboard keyboard;

void creation() {
    f = (keyboard *)malloc(sizeof(keyboard));
    printf("Enter key: ");
    scanf("%d", &f->key);
    if(f->key>=10){
        free(f);
        creation();
    }
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
        printf("Keyboard is empty\n");
        return;
    }
    t = head;
    printf("Keys on the keyboard are : ");
    while (t != NULL) {
        printf("%d ", t->key);
        t = t->l;
    }
    printf("\n");
}


int main() {
    int ch;
    printf("1. Enter key on keyboard\n2. Display Keyboard\n3. Exit(0)\n");
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
                printf("Program Exited. Thank You\n");
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }
}
