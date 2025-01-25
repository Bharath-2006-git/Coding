#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* l;
}*f,*t,*head=NULL;

typedef struct node node;

void create(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    while(n>0){
        f=(node*)malloc(sizeof(node));
        printf("Enter data: ");
        scanf("%d",&f->data);
        f->l=NULL;
        if(head==NULL){
            head=f;  
        }
        else t->l=f;
        t=f;
        n--;
    }

}

void display(){
    printf("Elements are: \n");
    t=head;
    while(t!=NULL){
        printf("%d ",t->data);
        t=t->l;
    }
}

void insertbegin(){
    node *f1=(node *)malloc(sizeof(node));
    printf("Enter data: ");
    scanf("%d",&f1->data);
    f1->l=head;
    head=f1;
    display();
}

void insertend(){
    node *f1=(node *)malloc(sizeof(node));
    printf("Enter data: ");
    scanf("%d",&f1->data);
    t=head;
    while(t->l!=NULL){
        t=t->l;
    }
    t->l=f1;
    f1->l=NULL;
    display();
}

void insertpos(){
    int p,c=1;
    printf("Enter position: ");
    scanf("%d",&p);
    t=head;
    while(t->l!=NULL && p>c){
        f=t;
        t=t->l;
        c++;
    }
    
    node *f1=(node *)malloc(sizeof(node));
    printf("Enter data: ");
    scanf("%d",&f1->data);
    f->l=f1;
    f1->l=t;
    display();
}


int main(){
    int ch;
    printf("1. Create\n2. Display\n3. Insert at begining\n4. Insert at End\n5. Insert by Position\n6. Exit");
    while(1){
        printf("\nEnter choice: ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            insertbegin();
            break;
        case 4:
            insertend();
            break;
        case 5:
            insertpos();
            break;
        case 6:
            printf("Thanks");
            break;
        default:
            printf("Invalid Choice: ");
            break;
        }
    }
}