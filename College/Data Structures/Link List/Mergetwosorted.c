#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *l;
} *f, *t, *head1 = NULL, *head2 = NULL, *head3 = NULL, *head = NULL;

typedef struct node node;

void create() {
    int n, i = 0, ln;
    printf("Enter list number : ");
    scanf("%d", &ln);
    if (ln == 1) {
        head = head1;
    } else {
        head = head2;
    }
    printf("Enter number of elements: ");
    scanf("%d", &n);
    while (n > 0) {
        f = (node*)malloc(sizeof(node));
        printf("Enter data for Element %d: ", i + 1);
        scanf("%d", &f->data);
        f->l = NULL;
        if (head == NULL) {
            head = f;
            if (ln == 1) {
                head1 = head;
            } else {
                head2 = head;
            }
        } else {
            t->l = f;
        }
        t = f;
        n--;
        i++;
    }
}

void display() {
    int ln;
    printf("Enter list number : ");
    scanf("%d", &ln);
    if (ln == 1) {
        t = head1;
    } else {
        t = head2;
    }
    printf("List %d : ", ln);
    while (t != NULL) {
        printf("%d ", t->data);
        t = t->l;
    }
    printf("\n");
}

void merge() {
    if (head1->data <= head2->data) {
        head3 = head1;
        head1 = head1->l;
    } else {
        head3 = head2;
        head2 = head2->l;
    }
    t = head3;
    while (head1 != NULL && head2 != NULL) {
        if (head1->data <= head2->data) {
            t->l = head1;
            t = head1;
            head1 = head1->l;
        } else {
            t->l = head2;
            t = head2;
            head2 = head2->l;
        }
    }
    if (head1 != NULL) {
        t->l = head1;
    } else {
        t->l = head2;
    }

    t = head3;
    printf("Merged List : ");
    while (t != NULL) {
        printf("%d ", t->data);
        t = t->l;
    }
    printf("\n");
}

int main() {
    int ch;
    printf("\n1. Create List\n2. Display List\n3. Merge Lists\n4. Exit\n");
    while (1) {
        printf("\nEnter Choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                create();
                break;
            case 2:
                display();
                break;
            case 3:
                merge();
                break;
            case 4:
                printf("Program Exited\n");
                exit(0);
            default:
                printf("Enter a valid choice\n");
        }
    }
}