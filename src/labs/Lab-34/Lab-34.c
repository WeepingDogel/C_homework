#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool areAnagrams(char str1[], char str2[]) {
    // TODO: Implement logic to check if the two strings are anagrams
}

int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    if (areAnagrams(str1, str2)) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}
