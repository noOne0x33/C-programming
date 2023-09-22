/***
*Write a program to take the discriminate of *equation *D=b^2-4ac roots is root or not
***/
#include <stdio.h>
int main() {
    double a, b, c, discriminant;

    // Input coefficients
    printf("Enter the coefficients of the quadratic equation (a, b, c): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    // Determine if the roots are real and display the result
    if (discriminant > 0) {
        printf("The quadratic equation has two real roots.\n");
    } else if (discriminant == 0) {
        printf("The quadratic equation has one real root.\n");
    } else {
        printf("The quadratic equation has no real roots (complex roots).\n");
    }
    return 0;
}
