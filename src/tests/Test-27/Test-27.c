#include <stdio.h>
#include <string.h>

int lcs(char* str1, char* str2) {
    // TODO: Implement LCS using dynamic programming
}

int main() {
    char str1[100], str2[100];
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    printf("Length of Longest Common Subsequence: %d\n", lcs(str1, str2));

    return 0;
}
