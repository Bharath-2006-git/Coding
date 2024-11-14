// To define a structure called height having two members feet(int) and inches(float)
// Create three structure variables h1,h2,h3;
// Accept two heights from user then sum it and store in h3
// Also find who is tallest among h1 and h2
#include<stdio.h>
struct height{
    int feet;
    float inch;
};
typedef struct height ht;
void accept(ht *p){
    printf("\nEnter feet and inches: ");
    scanf("%d%f",&p->feet,&p->inch);
}
void show(ht *p){
    printf("Feet: %d and inches: %.1f",p->feet,p->inch);
}
void add(ht *p,ht *q,ht *r){
    r->inch=p->inch+q->inch;
    if(r->inch>=12.0) {
        r->inch=r->inch-12.0;
        r->feet=p->feet+q->feet+1;
    }
    else{
        r->feet=p->feet+q->feet;
    }
}
int main(){
    ht h1,h2,h3;
    printf("Enter h1: ");
    accept(&h1);
    printf("Enter h2: ");
    accept(&h2);
    add(&h1,&h2,&h3);
    printf("\nH1 is: ");
    show(&h1);
    printf("\nH2 is: ");
    show(&h2);
    printf("\nH3 is: ");
    show(&h3);

}