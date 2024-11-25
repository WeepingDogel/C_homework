#include <stdio.h>

void transposeMatrix(int matrix[10][10], int rows, int cols, int transposed[10][10]) {
    // TODO: Implement logic to transpose the matrix
}

int main() {
    int matrix[10][10], transposed[10][10];
    int rows, cols;

    printf("Enter rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter the matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    transposeMatrix(matrix, rows, cols, transposed);

    printf("Transposed matrix:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", transposed[i][j]);
        }
        printf("\n");
    }

    return 0;
}
