/***
* Write a program to input 2 numbers and find the larger among two
*/

#include <stdio.h>

int main(){
    double num1, num2;

    // Input the first number
    printf("Enter the first number: ");
    scanf("%lf", &num1);

    // Input the second number
    printf("Enter the second number: ");
    scanf("%lf", &num2);

    // Compare the two numbers and find the larger one
    if (num1 > num2){
        printf("The larger number is %.2lf\n", num1);
    }else if(num2 > num1){
        printf("The larger number is %.2lf\n", num2);
    }else{
        printf("Both numbers are equal.\n");
    }

    return 0;
}