#include<stdio.h>
#include<stdlib.h>
struct cabin{
    int cabinno;
    struct cabin *next;
}*f,*t,*head=NULL;
typedef struct cabin cabin;

void append(){
    f=(cabin*)malloc(sizeof(cabin));
    printf("Enter cabin number: ");
    scanf("%d",&f->cabinno);
    f->next=NULL;
    if(head==NULL) head=f;
    else t->next=f;
    t=f;
}

void display(){
    t=head;
    printf("Cabin positions are: ");
    while(t!=NULL){
        printf("%d ",t->cabinno);
        t=t->next;
    }
}


void validate(){
    int x;
    printf("Enter the cabin number to search: ");
    scanf("%d",&x);
    t = head;
    while (t != NULL) {
        if (t->cabinno == x) {
            printf("Cabin %d is present in the giant wheel\n", x);
            return;
        }
        t = t->next;
    }

    printf("Cabin %d is not present in the giant wheel\n", x);
}



int main(){
    int ch;
    printf("1. Insert Cabin\n2. Display\n3. Rotate Right\n4. Rotate Left\n5. Validate\n6. Exit");
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
                rightrotate();
                break;
            // case 4:
            //     leftrotate();
            //     break;
            case 5:
                validate();
                break;
            case 6:
                printf("Program Exited\n");
                exit(0);
            default:
                printf("Enter valid choice");
                
        }
    }
}