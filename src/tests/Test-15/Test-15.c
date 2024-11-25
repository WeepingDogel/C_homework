#include <stdio.h>

void countSort(int arr[], int size, int exp) {
    // TODO: Implement counting sort for a specific digit (exp)
}

void radixSort(int arr[], int size) {
    // TODO: Implement Radix Sort using countSort
}

int main() {
    int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int size = sizeof(arr) / sizeof(arr[0]);

    radixSort(arr, size);

    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
