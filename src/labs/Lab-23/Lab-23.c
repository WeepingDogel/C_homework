#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

// Enqueue operation
void enqueue(int value) {
    // TODO: Add an element to the circular queue
}

// Dequeue operation
int dequeue() {
    // TODO: Remove an element from the circular queue
}

// Display the queue
void display() {
    // TODO: Display elements in the circular queue
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    printf("Circular Queue: ");
    display();

    printf("Dequeued element: %d\n", dequeue());
    printf("Circular Queue after dequeue: ");
    display();

    return 0;
}
