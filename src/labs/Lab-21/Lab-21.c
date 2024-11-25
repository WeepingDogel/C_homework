#include <stdio.h>

void merge(int arr[], int left, int mid, int right) {
    // TODO: Implement logic to merge two sorted subarrays
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        // Recursively divide the array
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Merge the divided parts
        merge(arr, left, mid, right);
    }
}

int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Sort the array
    mergeSort(arr, 0, size - 1);

    // Print the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
