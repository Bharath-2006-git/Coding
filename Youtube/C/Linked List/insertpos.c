#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head;
struct node *second;
struct node *third;
typedef struct node node;


void display() {
    struct node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        printf("\n"); 
        temp = temp->next;
    }
    
}


void insertposition() {
    int x, count = 1, pos;
    node *present, *previous, *t;

    printf("Enter position to insert: ");
    scanf("%d", &pos);

    if (pos == 1) {
        
        t = (node*)malloc(sizeof(node));
        printf("Enter data: ");
        scanf("%d", &x);
        t->data = x;
        t->next = head;
        head = t;
    } else {
       
        present = head;
        previous = NULL;

        while (present != NULL && count < pos) {
            previous = present;
            present = present->next;
            count++;
        }

        if (count == pos) {
           
            t = (node*)malloc(sizeof(node));
            printf("Enter data: ");
            scanf("%d", &x);
            t->data = x;
            t->next = present;
            previous->next = t;
        } else {
           
            printf("Insertion not possible\n");

        }
    }
}

int main() {
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 66;
    third->next = NULL;

    
    display();
    insertposition(); 
    display();

    return 0;
}
