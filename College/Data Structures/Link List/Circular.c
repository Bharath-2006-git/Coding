#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *l;
} *f, *t, *head = NULL;

void creation() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    while (n > 0) { 
        f = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data: ");
        scanf("%d", &f->data);
        if (head == NULL) {
            head = f;
            head->l = head; 
        } else {
            t->l = f;
            f->l = head; 
        }
        t = f;
        n--;
    }
}

void display() {
    t = head;
    while (t->l != head) {
        printf("%d ", t->data);
        t = t->l;
    }
    printf("%d ", t->data);
}

void Insertbegin() {
    struct node *f1;
    f1 = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &f1->data);
        t = head;
        while (t->l != head) {
            t = t->l; 
        }
        f1->l = head;
        t->l = f1;
        head = f1; 
}

void insertend() {
    struct node *f1;
    f1 = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &f1->data);
    t = head;
    while (t->l != head) t = t->l;
    t->l = f1;
    f1->l = head;
}


void insertpos() {
    int p, c = 1;
    struct node *f1;
    t = head;
    f1 = (struct node *)malloc(sizeof(struct node));
    printf("Enter the position to insert: ");
    scanf("%d", &p);
    printf("Enter the data: ");
    scanf("%d", &f1->data);
    while (t->l != head && p > c) {
        f = t;
        t = t->l;
        c++;
    }
    f->l = f1;
    f1->l = t;
}


void deletebegin() {
    
    t = head;
    head = head->l;
    f = head;
    while (f->l != t) {
        f = f->l;
    }
    f->l = head;
    free(t);
}


void deleteend() {
    t = head;
    while (t->l != head) {
        f = t;
        t = t->l;
    }
    f->l = head;
    free(t);
}


void deletepos() {
    int p, c = 1;
    printf("Enter the position: ");
    scanf("%d", &p);
    t=head;
    while(t->l!=head && p>c){
        f=t;
        t=t->l;
        c++;
    }
    f->l=t->l;
    free(t);
    
}


int main() {
    int ch;
    printf("1. Create\n2. Display\n3. InsertBegin\n4. InsertEnd\n5. InsertPosition\n6. DeleteBegin\n7. DeleteEnd\n8. DeletePosition\n9. Exit(0)");
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
                deleteend();
                break;
            case 8:
                deletepos();
                break;
            case 9:
                printf("Program Exited. Thank You\n");
                exit(0);
            default:
                printf("Invalid choice!\n");
                
        }
    }
}
