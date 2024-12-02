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
        temp = temp->next;
        printf("\n");
    }
    
}

void deletelast(){
    node *t,*p;
    if(head==NULL) printf("Linked List is empty");
    else if(head->next==NULL){
        t=head;
        head=NULL;
        free(t);
    }
    else{
        t=head->next;
        p=head;
        while(t->next!=NULL){
            t=t->next;
            p=p->next;
        }
        p->next=NULL;
        free(t);
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

    printf("Initial: \n");
    display();
    deletelast();
    printf("After: \n");
    display();
    return 0;
}
