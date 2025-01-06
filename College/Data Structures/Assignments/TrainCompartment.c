#include <stdio.h>
#include <stdlib.h>

struct compartment {
    int data;
    struct compartment *l;
} *f1, *t1, *head1 = NULL, *f2, *t2, *head2 = NULL;
typedef struct compartment comp;

void track1() {
    f1 = (comp*)malloc(sizeof(comp));
    if (!f1) {
        printf("Memory allocation failed\n");
        return;
    }
    printf("Enter compartment number: ");
    scanf("%d", &f1->data);
    f1->l = NULL;
    if (head1 == NULL) head1 = f1;
    else t1->l = f1;
    t1 = f1;
}

void track2() {
    f2 = (comp*)malloc(sizeof(comp));
    if (!f2) {
        printf("Memory allocation failed\n");
        return;
    }
    printf("Enter compartment number: ");
    scanf("%d", &f2->data);
    f2->l = NULL;
    if (head2 == NULL) head2 = f2;
    else t2->l = f2;
    t2 = f2;
}

void display1() {
    t1 = head1;
    if(head1==NULL){
        printf("Track is empty");
        return;
    }
    printf("Compartments in Track 1 are: ");
    while (t1 != NULL) {
        printf("%d ", t1->data);
        t1 = t1->l;
    }
    printf("\n");
}

void display2() {

    t2 = head2;
    if(head2==NULL){
        printf("Track merged to Track 1 or track is empty\n");
        return;
    }
    printf("Compartments in Track 2 are: ");
    while (t2 != NULL) {
        printf("%d ", t2->data);
        t2 = t2->l;
    }
    printf("\n");
}

void merge() {
    if (head1 == NULL) {
        head1 = head2;
        return;
    }
    t1 = head1;
    while (t1->l != NULL) t1 = t1->l;
    t1->l = head2;
    head2 = NULL;
}

int main() {
    int ch;
    printf("1. Insert in Track 1\n2. Insert in Track 2\n3. Display Track 1\n4. Display Track 2\n5. Merge Compartments\n6. Exit\n");
    while (1) {
        printf("\nEnter Choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                track1();
                break;
            case 2:
                track2();
                break;
            case 3:
                display1();
                break;
            case 4:
                display2();
                break;
            case 5:
                merge();
                printf("Tracks merged successfully.\n");
                break;
            case 6:
                printf("Program Exited\n");
                exit(0);
            default:
                printf("Enter a valid choice\n");
        }
    }
    return 0;
}
