#include <stdio.h>
#include <string.h>

void computeLPSArray(char* pattern, int M, int* lps) {
    // TODO: Compute the longest prefix suffix array
}

void KMPSearch(char* text, char* pattern) {
    // TODO: Implement the KMP algorithm
}

int main() {
    char text[100], pattern[100];
    printf("Enter the text: ");
    scanf("%s", text);
    printf("Enter the pattern: ");
    scanf("%s", pattern);

    KMPSearch(text, pattern);

    return 0;
}
