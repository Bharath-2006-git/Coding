#include <stdio.h>

char stack[100];
int top = -1;

void push(char x) {
    stack[++top] = x;
}

char pop() {
    if (top == -1) 
        return -1;
    return stack[top--];
}

int main() {
    char exp[100], *e;
    printf("Enter the expression: ");
    scanf("%s", exp);
    
    e = exp;
    while (*e != '\0') { 
        if (*e == '(' || *e == '{' || *e == '[') {
            push(*e);
        } else if ((*e == ')' && stack[top] == '(') ||
                   (*e == '}' && stack[top] == '{') ||
                   (*e == ']' && stack[top] == '[')) {
            pop();
        }
        e++;  
    }

 
    if (top == -1) 
        printf("Expression balanced\n");
    else 
        printf("Expression not balanced\n");

    return 0;
}
