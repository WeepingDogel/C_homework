#include <stdio.h>

int maxSubarraySum(int arr[], int size) {
    // TODO: Implement Kadane’s algorithm to find maximum subarray sum
}

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Maximum Subarray Sum: %d\n", maxSubarraySum(arr, size));

    return 0;
}
