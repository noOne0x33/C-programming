/***
*write a program to find the area of circle
***/

#include <stdio.h>

#define PI 3.14

int main(){
    double radius, area;

    // Input the radius of the circle
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    // Calculate the area of the circle
    area = PI * radius * radius;

    // Print the result
    printf("The area of the circle with radius %.2lf is %.2lf square units.\n", radius, area);

    return 0;
}