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
        else{
            t=head;
            f->l=t;
            head=f;
        }
        
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


int main(){
    int ch;
    printf("1. Create\n2. Display\n3. DeleteEnd\n4. Exit");
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
            printf("Thanks");
            exit(0);
        default:
            printf("Invalid Choice: ");
            break;
        }
    }
}