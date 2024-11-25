#include <stdio.h>
#define MAX 100

int heap[MAX];
int size = 0;

void insert(int value) {
    // TODO: Implement insertion in a max-heap
}

int deleteMax() {
    // TODO: Implement deletion of the maximum element
}

void displayHeap() {
    // TODO: Print the heap elements
}

int main() {
    insert(20);
    insert(15);
    insert(30);
    insert(10);

    printf("Heap elements: ");
    displayHeap();

    printf("Deleted max element: %d\n", deleteMax());
    printf("Heap after deletion: ");
    displayHeap();

    return 0;
}
