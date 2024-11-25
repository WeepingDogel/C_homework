#include <stdio.h>

// Function to swap two numbers using pointers
void swap(int* a, int* b) {
    // TODO: Implement swapping logic using a temporary variable.
    
}

int main() {
    int x, y;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    // Display numbers before swapping
    printf("Before swapping: x = %d, y = %d\n", x, y);

    // Call the swap function
    swap(&x, &y);

    // Display numbers after swapping
    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}
