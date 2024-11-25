#include <stdio.h>

// Recursive function to calculate power
int power(int base, int exp) {
    // TODO: Implement power calculation
}

int main() {
    int base, exp;

    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);

    printf("%d^%d = %d\n", base, exp, power(base, exp));

    return 0;
}
