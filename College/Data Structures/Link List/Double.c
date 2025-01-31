#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *ll; 
    struct node *rl; 
} *f, *t, *head = NULL;

void creation() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    while (n > 0) {
        f = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data: ");
        scanf("%d", &f->data);
        f->ll = NULL;
        f->rl = NULL;
        if (head == NULL) {
            head = f;
        } else {
            t->rl = f;
            f->ll = t;
        }
        t = f;
        n--;
    }
}

void display() {
    t = head;
    while (t != NULL) { 
        printf("%d ", t->data);
        t = t->rl;
    }
    printf("\n");
}

void Insertbegin() {
    struct node *f1;
    f1 = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &f1->data);
    f1->ll = NULL;
    f1->rl = head;
    if (head != NULL) {
        head->ll = f1;
    }
    head = f1;
}

void insertend() {
    struct node *f1;
    f1 = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &f1->data);
    f1->rl = NULL;
    if (head == NULL) {
        f1->ll = NULL;
        head = f1;
        return;
    }
    t = head;
    while (t->rl != NULL) {
        t = t->rl;
    }
    t->rl = f1;
    f1->ll = t;
}

void insertpos() {
    int p, c = 1;
    struct node *f1;
    t = head;
    f1 = (struct node *)malloc(sizeof(struct node));
    printf("Enter the position to insert: ");
    scanf("%d", &p);
    printf("\nEnter the data: ");
    scanf("%d", &f1->data);
    while (t->rl != NULL && p > c) {
        f = t;
        t = t->rl;
        c++;
    }   
    f->rl = f1;
    f1->ll = t;
    f1->rl=t;
    t->ll=f1;
}

void deletebegin() {
    if (head == NULL) {
        return; 
    }
    t = head;
    head = head->rl;
    head->ll = NULL;
    free(t);
}

void deleteEnd(){
    struct node *f1;
    t=head;
    while(t->rl!=NULL){
        f1=t;
        t=t->rl;
    }
    f1->rl=NULL;
    free(t);
}

void deletepos() {
    int p, c = 1;
    struct node *f1;
    t = head;
    printf("Enter the position: ");
    scanf("%d", &p);
    while (t->rl != NULL && p > c) {
        f = t;
        t = t->rl;
        c++;
    }
    f1=t->rl;
    f->rl=f1;
    f1->ll=f;
    free(t);
}


int main() {
    int ch;
    printf("1. Create\n2. Display\n3. InsertBegin\n4. InsertEnd\n5. Insert at Position\n6. DeleteBegin\n7. DeleteEnd\n8. Delete Position\n9.  Exit(0)\n");
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
                Insertbegin();
                break;
            case 4:
                insertend();
                break;
            case 5:
                insertpos();
                break;
            case 6:
                deletebegin();
                break;
            case 7:
                deleteEnd();
                break;
            case 8:
                deletepos();
                break;
            case 9:
                printf("Program exited!");
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }
}
