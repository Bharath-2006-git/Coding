#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct node {
    int id;
    char name[20];
    char gender[20];
    int marks;
    struct node *ll; 
    struct node *rl; 
} *f, *t, *head = NULL;

void append() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    while (n > 0) {
       
        f = (struct node *)malloc(sizeof(struct node));
        printf("Enter the ID: ");
        scanf("%d", &f->id);
        printf("Enter the name: ");
        scanf("%s", f->name); 
        printf("Enter the gender: ");
        scanf("%s", f->gender);
        printf("Enter the marks: ");
        scanf("%d", &f->marks);
        f->ll = NULL;
        f->rl = NULL;
        if (head == NULL) {
            head = f;
        } else {
            t->rl = f;
            f->ll = t;
        }
        t = f;
        n--;
    }
}

void findMax() {
    if (head == NULL) {
        printf("No student data found\n");
        return;
    }
    int max = head->marks;
    struct node *topper = head;

    t = head->rl;
    while (t != NULL) {
        if (t->marks > max) {
            max = t->marks;
            topper = t;
        }
        t = t->rl;
    }
    printf("\nHighest marks: %d\n", max);
    printf("Topper details:\n");
    printf("ID: %d\nName: %s\nGender: %s\nMarks: %d\n", topper->id, topper->name, topper->gender, topper->marks);
}

void display() {
    if (head == NULL) {
        printf("No data to display\n");
        return;
    }

    t = head;
    while (t != NULL) { 
        printf("ID: %d  Name: %s  Gender: %s  Marks: %d\n", t->id, t->name, t->gender, t->marks);
        t = t->rl;
    }
}

int main() {
    int ch;
    printf("1. Append\n2. Display\n3. Find Topper\n4. Exit(0)\n");
    while (1) {
        printf("\nEnter Choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                append();
                break;
            case 2:
                display();
                break;
            case 3:
                findMax();
                break;
            case 4:
                printf("Program exited!\n");
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }
    
}
