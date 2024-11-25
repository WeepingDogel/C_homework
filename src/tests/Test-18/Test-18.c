#include <stdio.h>

int longestIncreasingSubsequence(int arr[], int size) {
    // TODO: Implement LIS using dynamic programming
}

int main() {
    int arr[] = {10, 22, 9, 33, 21, 50, 41, 60, 80};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Length of Longest Increasing Subsequence: %d\n", longestIncreasingSubsequence(arr, size));

    return 0;
}
