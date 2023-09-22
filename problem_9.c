/***
*Write a program to swap two numbers without using 3rd variable
*and  +,- operator
***/

#include <stdio.h>

int main() {
    int num1, num2;

    // Input the two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Swap the numbers without a third variable and without + or -
    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;

    // Output the swapped numbers
    printf("After swapping, num1 = %d and num2 = %d\n", num1, num2);

    return 0;
}