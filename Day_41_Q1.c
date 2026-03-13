#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define MAX 100
int top = -1;
char stack[MAX];

void push(char data) {
    if (top == MAX - 1) {
        printf("Overflow\n");
    } else {
        top++;
        stack[top] = data;
    }
}
void peek() {
    if (top == -1){ 
        printf("Stack is empty\n");
    } else {
        printf("The top value is: %cn", stack[top]);
    }
}

void pop() {
    if (top == -1) {
        printf("Underflow\n");
    } else {
        char temp = stack[top];
        top--;
        printf("Popped element: %c\n", temp);
    }
}

int main() {
    char data[MAX];

    scanf("%s",data);
    for (int i = 0; i < strlen(data); i++) {
        push(data[i]);
    }
    
    printf("Elements in reverse order:\n");
    while (top != -1) {
        pop();
    }
    return 0;
}
