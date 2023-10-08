#include <stdio.h>

int main() {
    int n, i, j, space;

    printf("Enter the number of rows (should be an odd number): ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Please enter an odd number for a proper diamond pattern.\n");
        return 1;
    }

    // Upper half of the diamond
    for (i = 1; i <= n; i += 2) {
        // Print leading spaces
        for (space = 1; space <= (n - i) / 2; space++) {
            printf(" ");
        }

        // Print asterisks
        for (j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    // Lower half of the diamond (inverted)
    for (i = n - 2; i >= 1; i -= 2) {
        // Print leading spaces
        for (space = 1; space <= (n - i) / 2; space++) {
            printf(" ");
        }

        // Print asterisks
        for (j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}x