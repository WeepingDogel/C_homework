#include <stdio.h>

void rotateMatrix(int matrix[10][10], int n) {
    // TODO: Implement logic to rotate the matrix
}

int main() {
    int matrix[10][10], n;

    printf("Enter the size of the matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    rotateMatrix(matrix, n);

    printf("Rotated matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
