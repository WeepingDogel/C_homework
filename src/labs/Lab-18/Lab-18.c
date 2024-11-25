#include <stdio.h>

void rotateArray(int arr[], int size, int k) {
    // TODO: Implement array rotation logic
}

int main() {
    int n, k;

    // Input array size and number of rotations
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];

    // Input array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of rotations: ");
    scanf("%d", &k);

    rotateArray(arr, n, k);

    // Display rotated array
    printf("Rotated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
