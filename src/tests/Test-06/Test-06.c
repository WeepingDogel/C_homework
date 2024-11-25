#include <stdio.h>

void addMatrices(int mat1[10][10], int mat2[10][10], int rows, int cols, int result[10][10]) {
    // TODO: Implement logic for matrix addition
}

int main() {
    int mat1[10][10], mat2[10][10], result[10][10];
    int rows, cols;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of matrix 1:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements of matrix 2:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    addMatrices(mat1, mat2, rows, cols, result);

    printf("Resultant matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
