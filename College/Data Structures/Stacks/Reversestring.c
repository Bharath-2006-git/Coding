#include <stdio.h>

char stack[100];
int top = -1;

void push(char x) {
    stack[++top] = x;
}

char pop() {
    return stack[top--];
}

int main() {
    char exp[100];
    int i = 0;
    printf("Enter the expression: ");
    scanf("%s", exp);
    while (exp[i] != '\0') { 
        push(exp[i]);
        i++;
    }
    i = 0;
    while (top != -1) {
        exp[i++] = pop();
    }
    printf("Reverse of string is: %s", exp);

    return 0; 
}
