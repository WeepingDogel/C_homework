#include <stdio.h>

void strassenMultiply(int A[2][2], int B[2][2], int C[2][2]) {
    // TODO: Implement Strassen's matrix multiplication algorithm
}

int main() {
    int A[2][2], B[2][2], C[2][2];

    printf("Enter elements of matrix A (2x2):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of matrix B (2x2):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    strassenMultiply(A, B, C);

    printf("Resultant matrix C:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
