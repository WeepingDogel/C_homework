#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Recursive function to check palindrome
bool isPalindrome(char str[], int left, int right) {
    // TODO: Implement recursive palindrome check
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    if (isPalindrome(str, 0, strlen(str) - 1)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
