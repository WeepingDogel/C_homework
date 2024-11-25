#include <stdio.h>
#include <string.h>

void reverseWords(char* str) {
    // TODO: Implement logic to reverse words in a string
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    reverseWords(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
