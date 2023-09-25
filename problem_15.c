/***
 *Write a program to calculate the area of triangle using heron's formula
 ***/
#include <math.h>
#include <stdio.h>

int main() {
  double side1, side2, side3;

  printf("Enter the lengths of the three sides of the triangle:\n");
  scanf("%lf %lf %lf", &side1, &side2, &side3);

  // Calculate the semi-perimeter of the triangle
  double s = (side1 + side2 + side3) / 2.0;

  // Calculate the area using Heron's formula
  double area = sqrt(s * (s - side1) * (s - side2) * (s - side3));

  printf("The area of the triangle is: %.2lf\n", area);

  return 0;
}