/*
Lab-02
Implement a program to reverse a string using pointers.
*/

#include <stdio.h>
#include <string.h>

// Function to reverse a string using pointers
void reverseString(char* str) {
    char *start = str, *end = str + strlen(str) - 1;
    while (start < end) {
        // TODO: Swap the characters using pointers.
        start++;
        end--;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    reverseString(str);
    printf("Reversed string: %s\n", str);
    return 0;
}
