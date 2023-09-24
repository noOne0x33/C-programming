/***
 * Write a program in c to calculate the area of regular hexagon
***/

#include <stdio.h>
#include <math.h>

int main() {
    double s, area;

    // Input the length of the side from the user
    printf("Enter the length of the side of the hexagon: ");
    scanf("%lf", &s);

    // Calculate the area of the hexagon
    area = (3 * sqrt(3) * s * s) / 2;

    // Display the result
    printf("The area of the regular hexagon is: %lf square units\n", area);

    return 0;
}
