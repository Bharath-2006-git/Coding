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

void insertbegin(){
    struct node* t;
    int x;
    t=(node*)malloc(sizeof(node));
    printf("Enter the data part: ");
    scanf("%d",&x);
    t->data=x;
    t->next=head;
    head=t;

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
    insertbegin();
    display();
    return 0;
}
