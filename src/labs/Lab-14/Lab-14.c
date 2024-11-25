#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

// Function to push an element onto the stack
void push(int data) {
    // TODO: Implement push operation
}

// Function to pop an element from the stack
int pop() {
    // TODO: Implement pop operation
}

// Function to display the top element of the stack
int peek() {
    // TODO: Implement peek operation
}

int main() {
    push(10);
    push(20);
    push(30);

    printf("Top element: %d\n", peek());
    printf("Popped element: %d\n", pop());
    printf("Top element after pop: %d\n", peek());

    return 0;
}
