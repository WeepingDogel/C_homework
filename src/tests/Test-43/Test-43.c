#include <stdio.h>

int rodCutting(int prices[], int n) {
    // TODO: Implement logic for Rod Cutting problem
}

int main() {
    int prices[] = {0, 1, 5, 8, 9, 10, 17, 17, 20};
    int n = sizeof(prices) / sizeof(prices[0]) - 1;

    printf("Maximum obtainable value: %d\n", rodCutting(prices, n));

    return 0;
}
