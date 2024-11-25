#include <stdio.h>

// Partition function for Quick Select
int partition(int arr[], int low, int high) {
    // TODO: Implement partition logic
}

// Quick Select function to find the Kth smallest element
int kthSmallest(int arr[], int low, int high, int k) {
    // TODO: Implement Quick Select logic
}

int main() {
    int arr[] = {7, 10, 4, 3, 20, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k;

    printf("Enter the value of k: ");
    scanf("%d", &k);

    printf("Kth smallest element: %d\n", kthSmallest(arr, 0, size - 1, k));

    return 0;
}
