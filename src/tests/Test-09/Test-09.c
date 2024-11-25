#include <stdio.h>
#include <string.h>

void sortStrings(char arr[10][100], int n) {
    // TODO: Implement logic to sort strings
}

int main() {
    char arr[10][100];
    int n;

    printf("Enter the number of strings: ");
    scanf("%d", &n);

    printf("Enter the strings:\n");
    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i]);
    }

    sortStrings(arr, n);

    printf("Sorted strings:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }

    return 0;
}
