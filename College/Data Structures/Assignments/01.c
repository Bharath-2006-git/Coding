#include <stdio.h>
#include <stdlib.h>

struct cabin {
    int number;
    struct cabin *link;
};


int validate(struct cabin *q, int num);
void append(struct cabin **q, int n);
void display(struct cabin *q);
void rotateRight(struct cabin **q, int n);
void rotateleft(struct cabin **q, int n);

void append(struct cabin **q, int n) {
    struct cabin *temp = (struct cabin *)malloc(sizeof(struct cabin));
    temp->number = n;
    temp->link = NULL;

    if (*q == NULL) {
        *q = temp;
    } else {
        struct cabin *current = *q;
        while (current->link != NULL) {
            current = current->link;
        }
        current->link = temp;
    }
}

void display(struct cabin *q) {
    if (q == NULL) {
        printf("No cabins were inserted\n");
        return;
    }
    printf("Cabin positions are:");
    while (q != NULL) {
        printf("%d ", q->number);
        q = q->link;
    }
    printf("\n");
}

void rotateRight(struct cabin **q, int n) {
    if (*q == NULL) return;

    struct cabin *current = *q;
    int count = 0;
    while(current != NULL){
        count++;
        current = current->link;
    }
    
    if(validate(*q, n) == 0){
        printf("Enter a valid cabin number\n");
        return;
    }
    
    current = *q;
    int pos = 0;
    while(current != NULL){
        pos++;
        if(current->number == n) break;
        current = current->link;
    }
    
    int rotations = count - pos;
    printf("Number of rotation = %d\n", rotations);

    for (int i = 0; i < rotations; i++) {
        struct cabin *temp = *q;
        *q = (*q)->link;
        temp->link = NULL;

        struct cabin *last = *q;
        if(last != NULL){
            while (last->link != NULL) {
                last = last->link;
            }
            last->link = temp;
        }else{
            *q = temp;
        }
    }
}

void rotateleft(struct cabin **q, int n) {
    if (*q == NULL) return;
    
    struct cabin *current = *q;
    int count = 0;
    while(current != NULL){
        count++;
        current = current->link;
    }
    
    if(validate(*q, n) == 0){
        printf("Enter a valid cabin number\n");
        return;
    }
    
    current = *q;
    int pos = 0;
    while(current != NULL){
        pos++;
        if(current->number == n) break;
        current = current->link;
    }
    
    int rotations = pos - 1;
    printf("Number of rotation = %d\n", rotations);

    for (int i = 0; i < rotations; i++) {
        struct cabin *last = *q;
        struct cabin *secondLast = NULL;
        if(last != NULL){
            while (last->link != NULL) {
                secondLast = last;
                last = last->link;
            }
            if(secondLast != NULL){
                secondLast->link = NULL;
                last->link = *q;
                *q = last;
            }
        }
    }
}

int validate(struct cabin *q, int num) {
    while (q != NULL) {
        if (q->number == num) {
            return 1;
        }
        q = q->link;
    }
    return 0;
}

int main() {
    struct cabin *head = NULL;
    int choice, num;

    do {
        printf("1.Insert cabin\n");
        printf("2.Display\n");
        printf("3.Rotate Right\n");
        printf("4.Rotate Left\n");
        printf("5.Exit\n");
        printf("Enter your choice\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the cabin number\n");
                scanf("%d", &num);
                append(&head, num);
                break;
            case 2:
                display(head);
                break;
            case 3:
                printf("Enter the cabin number to rotate\n");
                scanf("%d", &num);
                rotateRight(&head, num);
                display(head);
                break;
            case 4:
                printf("Enter the cabin number to rotate\n");
                scanf("%d", &num);
                rotateleft(&head, num);
                display(head);
                break;
            case 5:
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 5);

    // Free allocated memory before exiting
    struct cabin *current = head;
    while (current != NULL) {
        struct cabin *next = current->link;
        free(current);
        current = next;
    }

    return 0;
}