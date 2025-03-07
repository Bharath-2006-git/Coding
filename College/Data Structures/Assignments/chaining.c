#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 10

struct node {
    int data;
    char name[50];
    int age;
    struct node *next;
} *a[n];

void insert() {
    int value, age, k;
    char name[50];
    printf("Enter data, name, and age: ");
    scanf("%d %s %d", &value, name, &age);
    
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = value;
    strcpy(newNode->name, name);
    newNode->age = age;
    k = value % n;
    newNode->next = a[k];
    a[k] = newNode;
}

void display() {
    printf("\nData Table:\n");
    for (int i = 0; i < n; i++) {
        struct node *temp = a[i];
        printf("a[%d] -> ", i);
        while (temp) {
            printf("[%d, %s, %d] -> ", temp->data, temp->name, temp->age);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

void search() {
    int value;
    printf("Enter data to search: ");
    scanf("%d", &value);
    struct node *temp = a[value % n];
    while (temp) {
        if (temp->data == value) {
            printf("Found: [%d, %s, %d]\n", temp->data, temp->name, temp->age);
            return;
        }
        temp = temp->next;
    }
    printf("Not found.\n");
}

void delete() {
    int value, k;
    printf("Enter data to delete: ");
    scanf("%d", &value);
    k = value % n;
    struct node *temp = a[k], *prev = NULL;
    while (temp) {
        if (temp->data == value) {
            if (prev) prev->next = temp->next;
            else a[k] = temp->next;
            free(temp);
            printf("Deleted %d.\n", value);
            return;
        }
        prev = temp;
        temp = temp->next;
    }
    printf("Not found.\n");
}

int main() {
    for (int i = 0; i < n; i++) a[i] = NULL;
    int choice;
    
    for (int i = 0; i < n; i++) {
        insert();
    }
    
    while (1) {
        printf("\n1. Search  2. Delete  3. Display  4. Exit\nChoice: ");
        scanf("%d", &choice);
        if (choice == 4) break;
        switch (choice) {
            case 1:
                search();
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            default:
                printf("Invalid choice.\n");
        }
    }
    return 0;
}
