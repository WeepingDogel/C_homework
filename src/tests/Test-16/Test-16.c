#include <stdio.h>
#include <stdbool.h>

bool subsetSum(int arr[], int size, int sum) {
    // TODO: Implement subset sum using recursion
}

int main() {
    int arr[] = {3, 34, 4, 12, 5, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum;

    printf("Enter the target sum: ");
    scanf("%d", &sum);

    if (subsetSum(arr, size, sum)) {
        printf("Subset with given sum exists.\n");
    } else {
        printf("No subset with given sum exists.\n");
    }

    return 0;
}
