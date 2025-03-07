#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define s 10

typedef struct {
    int id;
    char name[30];
    int age;
} Record;

Record a[s] = {{0}};

void insert() {
    Record r;
    printf("\nEnter ID, Name, Age: ");
    scanf("%d %s %d", &r.id, r.name, &r.age);
    
    int k = r.id % s;
    for (int i = 0; i < s; i++) {
        int j = (k + i) % s;
        if (a[j].id == 0) {
            a[j] = r;
            return;
        }
    }
    printf("\nHash table is full. Cannot insert.\n");
}

void display() {
    printf("\nHash Table:\n");
    for (int i = 0; i < s; i++) {
        if (a[i].id == 0)
            printf("Index %d: EMPTY\n", i);
        else
            printf("Index %d: ID = %d, Name = %s, Age = %d\n", i, a[i].id, a[i].name, a[i].age);
    }
}

int main() {
    int ch;
    while (1) {
        printf("\n1. Insert\n2. Display\n3. Exit\nEnter choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                insert();
                break;
            case 2:
                display();
                break;
            case 3:
                exit(0);
            default:
                printf("\nInvalid choice, try again.\n");
        }
    }
    return 0;
}
