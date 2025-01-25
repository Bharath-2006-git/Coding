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

void deleteBegin(){
    t=head;
    head=head->l;
    free(t);
    display();
}

void deleteEnd(){
    t=head;
    while(t->l!=NULL){
        f=t;
        t=t->l;
    }
    f->l=NULL;
    free(t);
    display();
}

void deletepos(){
    int p,c=1;
    printf("Enter position: ");
    scanf("%d",&p);
    t=head;
    while(t->l!=NULL && p>c){
        f=t;
        t=t->l;
        c++;
    }
    f->l=t->l;
    free(t);
    display();
}


int main(){
    int ch;
    printf("1. Create\n2. Display\n3. Delete begining\n4. Insert End\n5. Delete by Position\n6. Exit\n");
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
            deleteBegin();
            break;
        case 4:
            deleteEnd();
            break;
        case 5:
            deletepos();
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