#include <stdio.h>
#include <stdlib.h>

// Function to multiply two matrices
void multiplyMatrices(int** mat1, int r1, int c1, int** mat2, int r2, int c2, int** result) {
    // TODO: Implement multiplication logic
}

int main() {
    int r1, c1, r2, c2;

    // Input matrix dimensions
    printf("Enter dimensions of matrix 1 (rows cols): ");
    scanf("%d %d", &r1, &c1);
    printf("Enter dimensions of matrix 2 (rows cols): ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }

    // Dynamically allocate memory for matrices and result
    // TODO: Allocate memory for mat1, mat2, and result matrices

    // Input matrices and call multiplication function
    // TODO: Input matrix elements and call multiplyMatrices()

    return 0;
}
