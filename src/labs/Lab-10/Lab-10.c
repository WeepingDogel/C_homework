#include <stdio.h>

void mergeSortedArrays(int arr1[], int size1, int arr2[], int size2, int merged[]) {
    // TODO: Implement merging logic
}

int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int merged[size1 + size2];

    // Merge the arrays
    mergeSortedArrays(arr1, size1, arr2, size2, merged);

    // Display the merged array
    printf("Merged array: ");
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
