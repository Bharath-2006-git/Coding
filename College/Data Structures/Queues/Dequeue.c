#include<stdio.h>
#include<stdlib.h>
#define size 50
int dequeue[size];
int f=-1,r=-1;

void Insertfront(int x) {
    if((f == 0 && r == size-1) || f == r+1) {
        printf("Overflow");
    } else if(f == -1 && r == -1) {
        f = r = 0;
        dequeue[f] = x;
    } else if(f == 0) {
        f = size - 1;
        dequeue[f] = x;
    } else {
        dequeue[--f] = x;
    }
}

void Insertrear(int x) {
    if((f == 0 && r == size-1) || f == r+1) {
        printf("Overflow");
    } else if(f == -1 && r == -1) {
        f = r = 0;
        dequeue[r] = x;
    } else if(r == size-1) {
        r = 0;
        dequeue[r] = x;
    } else {
        dequeue[++r] = x;
    }
}

void Deletefront() {
    if(f == -1 && r == -1) {
        printf("Dequeue is empty");
    } else if(f == r) {
        printf("The deleted element is: %d", dequeue[f]);
        f = r = -1;
    } else if(f == size-1) {
        printf("The deleted element is: %d", dequeue[f]);
        f = 0;
    } else {
        printf("The deleted element is: %d", dequeue[f++]);
    }
}

void Deleterear() {
    if(f == -1 && r == -1) {
        printf("Dequeue is empty");
    } else if(f == r) {
        printf("The deleted element is: %d", dequeue[r]);
        f = r = -1;
    } else if(r == 0) {
        printf("The deleted element is: %d", dequeue[r]);
        r = size - 1;
    } else {
        printf("The deleted element is: %d", dequeue[r--]);
    }
}

void display() {
    if(f == -1 && r == -1) {
        printf("Dequeue is empty\n");
        return;
    }

    printf("Dequeue elements: ");
    if(f <= r) {
        for(int i = f; i <= r; i++)
            printf("%d ", dequeue[i]);
    } else {
        for(int i = f; i < size; i++)
            printf("%d ", dequeue[i]);
        for(int i = 0; i <= r; i++)
            printf("%d ", dequeue[i]);
    }
    printf("\n");
}

int main() {
    int ch, x;
    printf("1.Insertfront\n2.Insertrear\n3.Deletefront\n4.Deleterear\n5.Display\n6.Exit");

    while(1) {
        printf("\nEnter choice: ");
        scanf("%d", &ch);
        switch(ch) {
        case 1:
            printf("Enter element: ");
            scanf("%d", &x);
            Insertfront(x);
            break;
        case 2:
            printf("Enter element: ");
            scanf("%d", &x);
            Insertrear(x);
            break;
        case 3:
            Deletefront();
            break;
        case 4:
            Deleterear();
            break;
        case 5:
            display();
            break;
        case 6:
            exit(0);
        default:
            printf("Invalid choice\n");
            break;
        }
    }
}
