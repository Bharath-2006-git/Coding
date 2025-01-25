#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *ll;
    struct node *rl;
}*f,*t,*head=NULL;

typedef struct node node;

void create(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    while(n>0){
        f=(node *)malloc(sizeof(node));
        printf("Enter data: ");
        scanf("%d",&f->data);
        if(head==NULL){
            head=f;
            f->ll=NULL;
            f->rl=NULL;
        }
        else{
            t->rl=f;
            f->ll=t;
            f->rl=NULL;
        }
        t=f;
        n--;
    }
}

void display(){
    printf("\nElements are: \n");
    t=head;
    while(t!=NULL){
        printf("%d ",t->data);
        t=t->rl;
    }
}

void insertbegin(){
    f=(node *)malloc(sizeof(node));
    printf("Enter data: ");
    scanf("%d",&f->data);
    f->ll=NULL;
    f->rl=head;
    head=f;
    display();
}

void insertend(){
    f=(node *)malloc(sizeof(node));
    printf("Enter data: ");
    scanf("%d",&f->data);
    t=head;
    while(t->rl!=NULL){
        t=t->rl;
    }
    t->rl=f;
    f->ll=t;
    f->rl=NULL;
    display();
}

void insertpos(){
    int p,c=1;
    printf("Enter position: ");
    scanf("%d",&p);
    t=head;
    while(t->rl!=NULL && p>c){
        f=t;
        t=t->rl;
        c++;
    }
    
    node *f1=(node *)malloc(sizeof(node));
    printf("Enter data: ");
    scanf("%d",&f1->data);
    f->rl=f1;
    f1->ll=f;
    f1->rl=t;
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