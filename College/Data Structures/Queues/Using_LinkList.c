#include<stdio.h>
#include<stdlib.h>
 
struct node{
    int data;
    struct node *l;
}*f,*t,*front,*rear;

void enqueue(int x){
    f=(struct node *)malloc(sizeof(struct node));
    f->data=x;
    f->l=NULL;
    if(front==NULL && rear==NULL){
        front=f;
        rear=f;
    }
    else{
        rear->l=f;
        rear=f;
    }
}

void display(){
    t=front;
    while(t!=NULL){
        printf("%d ",t->data);
        t=t->l;
    }
}

void dequeue(){
    int a;
    if(front==NULL) printf("Stack Underflow");
    else{
        a=front->data;
        t=front;
        front=front->l;
        free(t);
    }
    display();
    printf("\nPopped element is: %d",a);
}

void main() {
    int ch, x;
    printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
    while (1) {
        printf("\nEnter choice: ");
        scanf("%d", &ch);
        switch (ch) {
        case 1:
            printf("Enter element: ");
            scanf("%d", &x);
            enqueue(x);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Thank You\n");
            exit(0);
        default:
            printf("Invalid choice\n");
            break;
        }
    }
}


