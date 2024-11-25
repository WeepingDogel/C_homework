#include <stdio.h>

int mergeAndCount(int arr[], int temp[], int left, int mid, int right) {
    // TODO: Implement merging and count inversions
}

int mergeSortAndCount(int arr[], int temp[], int left, int right) {
    // TODO: Implement merge sort to count inversions
}

int main() {
    int arr[] = {1, 20, 6, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int temp[size];
    printf("Number of inversions: %d\n", mergeSortAndCount(arr, temp, 0, size - 1));

    return 0;
}
