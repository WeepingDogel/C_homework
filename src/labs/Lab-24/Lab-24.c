#include <stdio.h>
#define MAX 100

int heap[MAX];
int size = 0;

// Insert into the heap
void insert(int value) {
    // TODO: Implement insertion logic for a max-heap
}

// Delete the maximum element
int deleteMax() {
    // TODO: Implement deletion logic for a max-heap
}

// Display the heap
void display() {
    // TODO: Print all elements in the heap
}

int main() {
    insert(20);
    insert(15);
    insert(30);
    insert(5);

    printf("Heap elements: ");
    display();

    printf("Deleted max element: %d\n", deleteMax());
    printf("Heap after deletion: ");
    display();

    return 0;
}
