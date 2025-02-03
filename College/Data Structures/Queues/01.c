#include<stdio.h>
#include<stdlib.h>
#define max 50
int q[max];
int f=-1,r=-1;

void enqueue(int x){
    if(r==max-1) printf("Overflow");
    if(f==-1 && r==-1){
        f++;
        r++;
        q[r]=x;
    }
    else{
        r++;
        q[r]=x;
    }
}

void display(){
    int i;
    for(i=f;i<=r;i++){
        printf("%d ",q[i]);
    }
}

void dequeue(){
    int a;
    if(f==-1 || f>r) printf("Underflow");
    else{
        a=q[f];
        f++;
    }
    printf("Element deleted is: %d",a);
    display();
}

void main(){
    int i,ch,x;
    printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit");
    while(1){
        printf("\nEnter choice: ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("Enter element: ");
            scanf("%d",&x);
            enqueue(x);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Thank You");
            exit(0);
        default:
            break;
        }
    }
}