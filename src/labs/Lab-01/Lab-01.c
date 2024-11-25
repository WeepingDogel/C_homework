/*
Lab-01
Write a program to calculate the factorial of a number using recursion.
*/

#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) return 1; // Base case
    // TODO: Implement the recursive factorial logic here
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factorial of %d is %d\n", num, factorial(num));
    return 0;
}
