/* Expression Tree */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct node {
    struct node *left;
    char data;
    struct node *right;
} *stack[30];

int top = -1;

void push(struct node *c) {
    stack[++top] = c;
}

struct node* pop() {
    return stack[top--];
}

void Inorder(struct node *temp) {
    if (temp != NULL) {
        Inorder(temp->left);
        printf("%c", temp->data);
        Inorder(temp->right);
    }
}

int main() {
    char exp[20];
    scanf("%s", exp);
    int i;

    for (i = 0; exp[i] != '\0'; i++) {
        if (isalpha(exp[i])) {
            struct node *newnode = (struct node*)malloc(sizeof(struct node));
            newnode->left = NULL;
            newnode->data = exp[i];
            newnode->right = NULL;
            push(newnode);
        } else if (exp[i] == '-' || exp[i] == '+' || exp[i] == '*' || exp[i] == '/' || exp[i] == '^') {
            struct node *ptr1 = pop();
            struct node *ptr2 = pop();
            struct node *newnode = (struct node*)malloc(sizeof(struct node));
            newnode->data = exp[i];
            newnode->right = ptr1;
            newnode->left = ptr2;
            push(newnode);
        }
    }

    Inorder(stack[0]);
    return 0;
}