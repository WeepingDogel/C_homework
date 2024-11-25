#include <stdio.h>
#include <string.h>

void rabinKarp(char* text, char* pattern, int prime) {
    // TODO: Implement the Rabin-Karp algorithm
}

int main() {
    char text[100], pattern[100];
    printf("Enter the text: ");
    scanf("%s", text);
    printf("Enter the pattern: ");
    scanf("%s", pattern);

    rabinKarp(text, pattern, 101);

    return 0;
}
