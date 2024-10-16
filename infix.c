#include <stdio.h>
#include <string.h>

char stack[50], postfix[100], infix[100];
int top = -1, top1 = -1;

void push(char ch) {
    if (top >= 49) {  // Adjusted the overflow condition
        printf("Stack Overflow\n");
    } else {
        stack[++top] = ch;
    }
}

char pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return '\0';  // Added return value to handle underflow
    } else {
        return stack[top--];
    }
}

int priority(char ch) {
    switch(ch) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
        case '(':
            return 0;
        default:
            return -1;
    }
}

int main() {
    char element, ch;
    printf("Enter the expression between ( ): ");
    scanf("%[^\n]", infix);  // No need for the & symbol

    printf("Symbol\t Stack \t Postfix Expression\n");
    for (int i = 0; i < strlen(infix); i++) {
        ch = infix[i];

        // If character is an operand (A-Z)
        if (ch >= 'A' && ch <= 'Z') {
            postfix[++top1] = ch;
        }
        // If character is an opening bracket '('
        else if (ch == '(') {
            push(ch);
        }
        // If character is a closing bracket ')'
        else if (ch == ')') {
            while ((element = pop()) != '(') {
                postfix[++top1] = element;
            }
        }
        // If character is an operator
        else {
            while (top != -1 && priority(ch) <= priority(stack[top])) {
                if (stack[top] == '(') {
                    break;
                }
                postfix[++top1] = pop();
            }
            push(ch);
        }

        // Print current status
        printf("%c\t%s\t%s\n", ch, stack, postfix);
    }

    // Pop all remaining elements from stack
    while (top != -1) {
        postfix[++top1] = pop();
    }

    postfix[top1 + 1] = '\0';  // Null-terminate the postfix expression
    printf("Final Postfix Expression: %s\n", postfix);

    return 0;
}

