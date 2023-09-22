/***
*Write a program to to swap two numbers
***/
#include <stdio.h>

int main() {
    int num1, num2, temp;

    // Input the two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Swap the numbers using a temporary variable
    temp = num1;
    num1 = num2;
    num2 = temp;

    // Output the swapped numbers
    printf("After swapping, num1 = %d and num2 = %d\n", num1, num2);

    return 0;
}
