/***
*Write a program to convert Celcius to Farenheit
***/

#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Input temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9.0/5.0) + 32;

    // Print the result
    printf("%.2f degrees Celsius is equal to %.2f degrees Fahrenheit\n", celsius, fahrenheit);

    return 0;
}