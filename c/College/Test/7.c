/* Q1) Write a C program to calculate the telephone bill with the help of 
above table. */
#include <stdio.h>

int main(void) {
char type;
float x, y, r, d, cost;
int internet, calls;
printf("ENTER TYPE INTERNET CALLS : \n");
scanf("%c %d %d", &type, &internet, &calls);
if (internet%1 == 0) {
     x = internet ;
}
else {
     x = internet + 1 ;
}
if (calls%50 == 0) {
     y = (float) calls/50 ;
}
else {
     y = (float) calls/50 + 1;
}
if (type == 's' || type == 'S') {
     x = x*10 ;
     y = y*75 ;
     r = 800 ;
     d = (x + y) / 2 ;
     cost = d + r ;
     printf("%.2f", cost);
}
else if (type == 'p' || type == 'P') {
     x = x*15 ;
     y = y*100 ;
     r = 400 ;
     d = (x + y) * 0.3 ;
     cost = d + r ;
     printf("%.2f", cost); 
}
else if (type == 'r' || type == 'R') {
     x = x*25 ;
     y = y*200 ;
     r = 0 ;
     d = (x + y) * 0.2 ;
     cost = d + r ;
     printf("%.2f", cost); 
}
else {
     printf("INVALID INPUT");
}

}