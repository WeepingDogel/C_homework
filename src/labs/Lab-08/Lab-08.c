#include <stdio.h>

// Partition function
int partition(int arr[], int low, int high) {
    // TODO: Implement partitioning logic
}

// Quick Sort function
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high); // Partition index
        quickSort(arr, low, pi - 1);        // Sort left subarray
        quickSort(arr, pi + 1, high);       // Sort right subarray
    }
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Sort the array
    quickSort(arr, 0, n - 1);

    // Display the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
