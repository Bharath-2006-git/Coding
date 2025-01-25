#include <stdio.h>
#include <stdlib.h>

int x, top = -1;
int n = 10;
int s[10];

void push() {
    
    if (top == n - 1) {
        printf("Stack overflow\n");
    } else {
        int x;
        printf("Enter the element to push: ");
        scanf("%d", &x);
        s[++top] = x;
    }
}

void display() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements are:");
        for (int i = top; i >= 0; i--) {
            printf("\n%d", s[i]);
        }
        printf("\n");
    }
}


void pop() {
    if (top == -1) {
        printf("Stack underflow\n");
    } else {
        x = s[top--];
        printf("Popped element is: %d\n", x);
        display();
    }
}


void peek() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        x = s[top];
        printf("Top element is: %d\n", x);
    }
}

int main() {
    int ch;
    printf("1. Push\n2. Pop\n3. Display\n4. Peek\n5. Exit\n");
    while (1) {
        printf("Enter choice: ");
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
