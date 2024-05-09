#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct Stack {
    char items[10000];
    int top;
};

void init(struct Stack* stack) {
    stack->top = -1;
}
void push(struct Stack* stack, char value) {
    stack->items[++stack->top] = value;
}

char pop(struct Stack* stack) {
    char v = stack->items[stack->top];
    stack->top--;
    return v;
};

bool isValid(char* s) {
    struct Stack stack;
    init(&stack);
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            push(&stack, s[i]);
        } else {
            if (stack.top == -1) { // Condition when closing parenthesis come before opening
                return false;
            }
            char topChar = pop(&stack);
            if ((s[i] == ')' && topChar != '(') ||
                (s[i] == '}' && topChar != '{') ||
                (s[i] == ']' && topChar != '[')) {
                return false; // Mismatched parentheses
            }
        }
    }

    return stack.top == -1;
}

int main() {
    char s[] = "{[()]}";
    if (isValid(s)) {
        printf("valid\n");
    } else {
        printf("invalid\n");
    }
    return 0;
}