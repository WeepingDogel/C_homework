#include <stdio.h>

int binarySearch(int arr[], int size, int key) {
    // TODO: Implement binary search algorithm
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    printf("Enter the key to search: ");
    scanf("%d", &key);

    int result = binarySearch(arr, size, key);
    if (result != -1) {
        printf("Key found at index %d\n", result);
    } else {
        printf("Key not found.\n");
    }

    return 0;
}
