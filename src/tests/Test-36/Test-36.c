#include <stdio.h>

// Function to detect a cycle using Floyd’s Algorithm
int detectCycle(int sequence[], int size) {
    // TODO: Implement Floyd’s Cycle Detection logic
}

int main() {
    int sequence[] = {1, 2, 3, 4, 2}; // Example with a cycle
    int size = sizeof(sequence) / sizeof(sequence[0]);

    if (detectCycle(sequence, size)) {
        printf("Cycle detected in the sequence.\n");
    } else {
        printf("No cycle detected.\n");
    }

    return 0;
}
