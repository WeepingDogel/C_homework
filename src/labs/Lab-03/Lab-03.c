#include <stdio.h>
#include <stdlib.h> // Required for malloc and free

int main() {
    int* arr;  // Pointer to hold the base address of the dynamically allocated array
    int n;     // Variable to store the size of the array

    // Step 1: Ask the user for the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Step 2: Allocate memory for the array dynamically
    arr = (int*)malloc(n * sizeof(int)); // Allocate memory for n integers

    if (arr == NULL) { // Check if memory allocation was successful
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Step 3: Accept elements from the user
    printf("Enter %d elements: \n", n);
    for (int i = 0; i < n; i++) {
        // TODO: Store the input into the array

    }

    // Step 4: Display the elements of the array
    printf("The elements of the array are: \n");
    for (int i = 0; i < n; i++) {
        // TODO: Print each element of the array

    }
    printf("\n");

    // Step 5: Free the allocated memory
    free(arr); // Release the dynamically allocated memory
    return 0;
}
