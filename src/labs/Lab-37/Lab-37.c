#include <stdio.h>
#include <stdbool.h>

void sieveOfEratosthenes(int n) {
    // TODO: Implement the sieve algorithm
}

int main() {
    int n;
    printf("Enter the number up to which you want to find primes: ");
    scanf("%d", &n);

    printf("Prime numbers up to %d:\n", n);
    sieveOfEratosthenes(n);

    return 0;
}
