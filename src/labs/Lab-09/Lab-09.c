#include <stdio.h>

// Function to calculate Fibonacci numbers
int fibonacci(int n) {
    // TODO: Implement the Fibonacci logic recursively
}

int main() {
    int n;

    // Input the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Display the Fibonacci series
    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}
