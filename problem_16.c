/***
 *Write a program in c to find the distance between 2 points
 ***/

#include <math.h>
#include <stdio.h>

int main() {
  double x1, y1, x2, y2, distance;

  printf("Enter the coordinates of the first point (x1 y1):\n");
  scanf("%lf %lf", &x1, &y1);

  printf("Enter the coordinates of the second point (x2 y2):\n");
  scanf("%lf %lf", &x2, &y2);

  // Calculate the distance using the distance formula
  distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

  printf("The distance between the two points is: %.2lf\n", distance);

  return 0;
}