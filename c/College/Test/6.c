/* Q8) Write a C program to find whether the movie is super hit or hit or 
average or flop or disaster, based on the box office collection and budget.   
If the collection is double the budget print super hit ,  if the collection 
is 1.5 times the budget print hit , if the collection is >= 90% of budget 
print average , if the  collection is 75% to 90% print flop,  if  the collection 
is <75% print disaster. */
#include <stdio.h>

int main(void) {
    int boc, b;
    printf("Enter box office collection and budget : ");
    scanf("%d %d", &boc, &b);
    float c = (float) b*1.5;
    float d = (float) boc / b;
    if (boc >= c) {
        printf("HIT");
    }
    else if (d >= 90) {
        printf("AVERAGE");
    }
    else if (d >= 75) {
        printf("FLOP");
    }
    else {
        printf("DISASTER");
    }

}
