#include <stdio.h>

void towerOfHanoi(int n, char from, char to, char aux) {
    // TODO: Implement recursive logic for Tower of Hanoi
}

int main() {
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);

    printf("The sequence of moves:\n");
    towerOfHanoi(n, 'A', 'C', 'B');

    return 0;
}
