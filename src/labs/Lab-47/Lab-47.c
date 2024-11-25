#include <stdio.h>

float findMedianSortedArrays(int arr1[], int size1, int arr2[], int size2) {
    // TODO: Implement logic to find the median
}

int main() {
    int arr1[] = {1, 3, 8};
    int arr2[] = {7, 9, 10, 11};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("Median: %.2f\n", findMedianSortedArrays(arr1, size1, arr2, size2));

    return 0;
}
