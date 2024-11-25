#include <stdio.h>

int modularExponentiation(int base, int exp, int mod) {
    // TODO: Implement modular exponentiation
}

int main() {
    int base, exp, mod;
    printf("Enter base, exponent, and modulus: ");
    scanf("%d %d %d", &base, &exp, &mod);

    printf("Result: %d\n", modularExponentiation(base, exp, mod));

    return 0;
}
