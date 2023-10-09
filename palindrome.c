#include <stdio.h>
#include <string.h>

int isDigitPalindrome(int n) {
    char str[20]; // Assuming the number has at most 20 digits
    sprintf(str, "%d", n); // Convert the number to a string
    int len = strlen(str);

    // Check if the string is a palindrome
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            return 0; // Not a palindrome
        }
    }

    return 1; // It's a palindrome
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isDigitPalindrome(num)) {
        printf("%d is a digit palindrome.\n", num);
    } else {
        printf("%d is not a digit palindrome.\n", num);
    }

    return 0;
}