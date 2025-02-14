#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int x) {
    if ((rear + 1) % MAX == front) {
        printf("Overflow\n");
        return;
    }
    if (front == -1) {
        front = 0;
    }
    rear = (rear + 1) % MAX;
    queue[rear] = x;
}

void display() {
    int i;
    if (front == -1) {
        printf("Underflow\n");
        return;
    }
    for (i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

void dequeue() {
    if (front == -1) {
        printf("Underflow\n");
        return;
    }
    int x = queue[front];
    if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % MAX;
    }
    printf("Deleted element: %d\n", x);
    display();
}

void main() {
    int ch, x;
    printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
    while (1) {
        printf("Enter choice: ");
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
