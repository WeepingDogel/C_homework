#include <stdio.h>

int factorial(int n) {
    // TODO: Implement factorial logic
}

int permutations(int n, int r) {
    // TODO: Calculate permutations
}

int combinations(int n, int r) {
    // TODO: Calculate combinations
}

int main() {
    int n, r;

    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);

    printf("P(%d, %d) = %d\n", n, r, permutations(n, r));
    printf("C(%d, %d) = %d\n", n, r, combinations(n, r));

    return 0;
}
