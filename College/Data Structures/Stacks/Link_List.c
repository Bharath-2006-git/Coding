#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *l;
} *t, *top=NULL;

void push(){
    int x;
    printf("Enter element to push: ");
    scanf("%d",&x);
    t=(struct node*)malloc(sizeof(struct node));
    t->data=x;
    t->l=top;
    top=t;
}

void display(){
    t=top;
    printf("Stack elements are: ");
    while(t!=NULL){
        printf("\n%d",t->data);
        t=t->l;
    }
}

void pop(){
    int a;
    if(top==NULL){
        printf("Stack Underflow");
    }
    else{
        a=top->data;
        t=top;
        top=top->l;
        free(t);
        printf("Popped element: %d\n",a);
        display();
    }
    
}

void peek() {
    if (top == NULL) {
        printf("Stack is empty\n");
    } else {
        int x = top->data;
        printf("Top element is: %d\n", x);
    }
}

int main() {
    int ch;
    printf("1. Push\n2. Pop\n3. Display\n4. Peek\n5. Exit\n");
    while (1) {
        printf("\nEnter choice: ");
        scanf("%d", &ch);
        switch (ch) {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            peek();
            break;
        case 5:
            printf("Thank You\n");
            exit(0);
        default:
            printf("Invalid choice\n");
            break;
        }
    }
    return 0;
}
