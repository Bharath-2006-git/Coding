#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *l;
}*f,*t,*head=NULL;
typedef struct node node;

void creation(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    while(n>0){
        f=(node*)malloc(sizeof(node));
        printf("Enter data part: ");
        scanf("%d",&f->data);
        f->l=NULL;
        if(head==NULL) head=f;
        else t->l=f;
        t=f;
        n--;
    }
}

void display(){
    t=head;
    while(t!=NULL){
        printf("%d ",t->data);
        t=t->l;
    }
}

void Insertbegin() {
    struct node *f1;
    f1 = (node *)malloc(sizeof(node));
    printf("Enter the data: ");
    scanf("%d", &f1->data);
    f1->l = head;
    head = f1;
}

void insertend() {
    struct node *f1;
    f1 = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &f1->data);
    t = head;
    while (t->l != NULL) t = t->l;
    t->l = f1;
    f1->l = NULL;
}

void deletebegin() {
    t = head;
    head = head->l;
    free(t);
}

void deleteend() {
    t = head;
    while (t->l != NULL) {
        f = t;
        t = t->l;
    }
    f->l = NULL;
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
            // case 5:
            //     insertpos();
            //     break;
            // case 6:
            //     deletebegin();
            //     break;
            // case 7:
            //     deleteend();
            //     break;
            // case 8:
            //     deletepos();
            //     break;
            case 9:
                printf("Program Exited. Thank You\n");
                exit(0);
            default:
                printf("Invalid choice!\n");
                
        }
    }
}
