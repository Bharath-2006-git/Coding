#include<stdio.h>
#include<stdlib.h>
#define n 10

struct node{
    int data;
    struct node *l;
}*a[n],*f,*t;

void insert(int value){
    int k;
    f=(struct node*)malloc(sizeof(struct node));
    f->data=value;
    f->l=NULL;
    k=value%n;
    if(a[k]==NULL){
        a[k]=f;
    }
    else{
        t=a[k];
        while(t->l!=NULL){
            t=t->l;
        }
        t->l=f;
    }
}

void display(){
    int i;
    printf("\nData Table:\n");
    for(i=0;i<n;i++){
        t=a[i];
        printf("a[%d] -> ",i);
        while(t){
            printf("%d -> ",t->data);
            t=t->l;
        }
        printf("NULL\n");
    }
}

int main(){
    int i,key;
    for(i=0;i<n;i++){
        a[i]=NULL;
    }
    for(i=0;i<n;i++){
        printf("Enter data to insert: ");
        scanf("%d",&key);
        insert(key);
    }
    display();
}