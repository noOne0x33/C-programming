/***
*Write a program to check the line straight or not
***/

#include <stdio.h>

// Function to check if two lines have the same slope
int areLinesStraight(float m1, float m2) {
    return m1 == m2;
}

int main() {
    float x1, y1, x2, y2, x3, y3;

    // Input coordinates of three points
    printf("Enter coordinates of point 1 (x y): ");
    scanf("%f %f", &x1, &y1);

    printf("Enter coordinates of point 2 (x y): ");
    scanf("%f %f", &x2, &y2);

    printf("Enter coordinates of point 3 (x y): ");
    scanf("%f %f", &x3, &y3);

    // Calculate the slopes (m) for two segments of the line
    float m1 = (y2 - y1) / (x2 - x1);
    float m2 = (y3 - y2) / (x3 - x2);

    // Check if the lines have the same slope, indicating a straight line
    if (areLinesStraight(m1, m2)) {
        printf("The line formed by the points is straight (y = mx + c).\n");
    } else {
        printf("The line formed by the points is not straight (y = mx + c).\n");
    }

    return 0;
}