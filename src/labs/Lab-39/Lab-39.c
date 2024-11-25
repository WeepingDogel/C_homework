#include <stdio.h>

int determinant(int matrix[10][10], int n) {
    // TODO: Implement logic to calculate the determinant
}

int main() {
    int n, matrix[10][10];

    printf("Enter the order of the matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Determinant of the matrix: %d\n", determinant(matrix, n));

    return 0;
}
