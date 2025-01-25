#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    int id;
    char name[20];
    char gender[20];
    struct node *ll; 
    struct node *rl; 
} *f, *t = NULL, *head = NULL;

void append() {
    char ans[5];
    do {
        f = (struct node *)malloc(sizeof(struct node));
        printf("Enter the ID: ");
        scanf("%d", &f->id);
        printf("Enter the name: ");
        scanf("%19s", f->name);
        printf("Enter the gender: ");
        scanf("%19s", f->gender);
        f->ll = NULL;
        f->rl = NULL;

        if (head == NULL) {
            head = f;
        } else {
            t->rl = f;
            f->ll = t;
        }
        t = f;

        printf("Do you want to add another student detail? (yes/no): ");
        scanf("%4s", ans);
    } while (strcmp(ans, "yes") == 0);
}

void display() {
    if (head == NULL) {
        printf("No data to display\n");
        return;
    }

    printf("\n%-4s %-10s %-7s\n", "ID", "Name", "Gender");
    t = head;
    while (t != NULL) {
        printf("%-4d %-10s %-7s\n", t->id, t->name, t->gender);
        t = t->rl;
    }
}

void countNodes() {
    int count = 0;
    t = head;
    while (t != NULL) {
        count++;
        t = t->rl;
    }
    printf("Total number of students: %d\n", count);
}

void insertAtBeginning() {
    f = (struct node *)malloc(sizeof(struct node));
    printf("Enter the ID: ");
    scanf("%d", &f->id);
    printf("Enter the name: ");
    scanf("%19s", f->name);
    printf("Enter the gender: ");
    scanf("%19s", f->gender);
    f->ll = NULL;
    f->rl = head;

    if (head != NULL) {
        head->ll = f;
    }
    head = f;
}

void insertAfterPosition() {
    int p, c = 1;
    printf("Enter the position to insert after: ");
    scanf("%d", &p);

    struct node *f1 = (struct node *)malloc(sizeof(struct node));
    printf("Enter the ID: ");
    scanf("%d", &f1->id);
    printf("Enter the name: ");
    scanf("%19s", f1->name);
    printf("Enter the gender: ");
    scanf("%19s", f1->gender);

    t = head;
     while (t->rl != NULL && p > c) {
        f = t;
        t = t->rl;
        c++;
    }   
    f->rl = f1;
    f1->ll = t;
    f1->rl=t;
    t->ll=f1;
}


void searchByID() {
    int searchID;
    printf("Enter the ID to search: ");
    scanf("%d", &searchID);

    t = head;
    while (t != NULL) {
        if (t->id == searchID) {
            printf("Student found: ID=%d, Name=%s, Gender=%s\n", t->id, t->name, t->gender);
            return;
        }
        t = t->rl;
    }
    printf("Student with ID %d not found\n", searchID);
}


void deleteAtBeginning() {
    if (head == NULL) {
        printf("No data to delete\n");
        return;
    }

    t = head;
    head = head->rl;
    if (head != NULL) {
        head->ll = NULL;
    }
    printf("Deleted student with ID=%d\n", t->id);
    free(t);
}

void deleteAtEnd() {
    if (head == NULL) {
        printf("No data to delete\n");
        return;
    }

    t = head;
    while (t->rl != NULL) {
        t = t->rl;
    }

    if (t->ll != NULL) {
        t->ll->rl = NULL;
    } else {
        head = NULL;
    }

    printf("Deleted student with ID=%d\n", t->id);
    free(t);
}

void deleteByID() {
    int deleteID;
    printf("Enter the ID of the student to delete: ");
    scanf("%d", &deleteID);

    t = head;
    while (t != NULL) {
        if (t->id == deleteID) {
            if (t->ll != NULL) {
                t->ll->rl = t->rl;
            } else {
                head = t->rl;
            }

            if (t->rl != NULL) {
                t->rl->ll = t->ll;
            }

            printf("Deleted student with ID=%d\n", t->id);
            free(t);
            return;
        }
        t = t->rl;
    }
    printf("Student with ID %d not found\n", deleteID);
}

void moveLastToFront() {
    if (head == NULL || head->rl == NULL) {  
        printf("List is too small to move last to front.\n");
        return;
    }

    t = head;
    while (t->rl != NULL) { 
        t = t->rl;
    }

    if (t->ll != NULL) {
        t->ll->rl = NULL;  
    }
    t->ll = NULL;  
    t->rl = head;  
    head->ll = t;  
    head = t;      

    printf("Moved last student to the front.\n");
}

int main() {
    int ch;
    printf("1. Append\n2. Display\n3. Count\n4. Insert at Beginning\n5. Insert After Position\n6. Search by ID\n");
    printf("7. Delete at Beginning\n8. Delete at End\n9. Delete by ID\n10. Move Last to Front\n11. Exit\n");
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
                countNodes();
                break;
            case 4:
                insertAtBeginning();
                break;
            case 5:
                insertAfterPosition();
                break;
            case 6:
                searchByID();
                break;
            case 7:
                deleteAtBeginning();
                break;
            case 8:
                deleteAtEnd();
                break;
            case 9:
                deleteByID();
                break;
            case 10:
                moveLastToFront();
                break;
            case 11:
                printf("Program exited!\n");
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }
}
