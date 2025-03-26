#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>

#define MAX 100

int top = -1;
char stack[MAX];

// checking if stack is full
int isFull() {
    return top == MAX - 1;
}

// checking if stack is empty
int isEmpty() {
    return top == -1;
}

void push(char item) {
    if (isFull()) {
        printf("Stack overflow\n");
        return;
    }
    stack[++top] = item;
}

// Function to remove an item from stack. It decreases top by 1
char pop() {
    if (isEmpty()) {
        printf("Stack underflow\n");
        return '\0';
    }
    return stack[top--];
}

// Function to return the top from stack without having to remove it
char peek() {
    if (isEmpty()) {
        return '\0';
    }
    return stack[top];
}

// A utility function: It is to check if the provided character is operand
int checkIfOperand(char ch) {
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

// Function to compare precedence
// If we return larger value means higher precedence
int precedence(char ch) {
    switch (ch) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
    }
    return -1;
}

// The driver function for infix to postfix conversion
void getPostfix(char *expression) {
    int i, j;

    for (i = 0, j = -1; expression[i]; ++i) {
        if (checkIfOperand(expression[i])) {
            expression[++j] = expression[i];
        } else if (expression[i] == '(') {
            push(expression[i]);
        } else if (expression[i] == ')') {
            while (!isEmpty() && peek() != '(') {
                expression[++j] = pop();
            }
            if (!isEmpty() && peek() != '(') {
                printf("Invalid expression\n");
                return;
            } else {
                pop();
            }
        } else { // if an operator
            while (!isEmpty() && precedence(expression[i]) <= precedence(peek())) {
                expression[++j] = pop();
            }
            push(expression[i]);
        }
    }

    // Once all initial expression characters are traversed
    // adding all left elements from stack to exp
    while (!isEmpty()) {
        expression[++j] = pop();
    }

    expression[++j] = '\0';
}

void reverse(char *exp) {
    int size = strlen(exp);
    int j = size, i = 0;
    char temp[size + 1];

    temp[j--] = '\0';
    while (exp[i] != '\0') {
        temp[j] = exp[i];
        j--;
        i++;
    }
    strcpy(exp, temp);
}

void brackets(char *exp) {
    int i = 0;
    while (exp[i] != '\0') {
        if (exp[i] == '(') {
            exp[i] = ')';
        } else if (exp[i] == ')') {
            exp[i] = '(';
        }
        i++;
    }
}

void InfixtoPrefix(char *exp) {
    // reverse string
    reverse(exp);
    // change brackets
    brackets(exp);
    // get postfix
    getPostfix(exp);
    // reverse string again
    reverse(exp);
}

int main() {
    printf("The infix is: ");

    char expression[] = "((a/b)+c)-(d+(e*f))";
    printf("%s\n", expression);
    InfixtoPrefix(expression);

    printf("The prefix is: ");
    printf("%s\n", expression);

    return 0;
}