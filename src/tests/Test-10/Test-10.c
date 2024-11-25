#include <stdio.h>

int knapsack(int weights[], int values[], int n, int W) {
    // TODO: Implement logic to solve the Knapsack problem
}

int main() {
    int n, W;
    printf("Enter the number of items: ");
    scanf("%d", &n);

    int weights[n], values[n];
    printf("Enter the weights and values of the items:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &weights[i], &values[i]);
    }

    printf("Enter the maximum capacity of the knapsack: ");
    scanf("%d", &W);

    printf("Maximum value in knapsack: %d\n", knapsack(weights, values, n, W));

    return 0;
}
