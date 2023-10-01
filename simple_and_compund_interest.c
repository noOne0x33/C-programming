/***
* Write a program to find simple interest and compound interest.
*/

#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time;
    int choice;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the annual interest rate (in percentage): ");
    scanf("%f", &rate);

    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    printf("Choose an option:\n");
    printf("1. Calculate Simple Interest\n");
    printf("2. Calculate Compound Interest\n");

    float simpleInterest;

    float compoundInterest;

    // Calculate Simple Interest

    simpleInterest = (principal * rate * time) / 100.0;
    printf("Simple Interest: %.2f\n", simpleInterest);

    // Calculate Compound Interest

    compoundInterest = principal * pow(1 + (rate / 100.0), time) - principal;
    printf("Compound Interest: %.2f\n", compoundInterest);

    return 0;

}