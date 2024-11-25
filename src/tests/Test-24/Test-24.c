#include <stdio.h>

int coinChange(int coins[], int n, int amount) {
    // TODO: Implement logic to find the number of ways to make change
}

int main() {
    int coins[] = {1, 2, 5};
    int n = sizeof(coins) / sizeof(coins[0]);
    int amount;

    printf("Enter the amount: ");
    scanf("%d", &amount);

    printf("Number of ways to make change: %d\n", coinChange(coins, n, amount));

    return 0;
}
