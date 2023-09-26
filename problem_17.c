/***
 *Write a program to check if a triangle is a right-angle triangle.
***/
#include <stdio.h>

int main(){
    double side1, side2, hypotenuse;

    // Input the lengths of the three sides of the triangle
    printf("Enter the length of side 1: ");
    scanf("%lf", &side1);
    
    printf("Enter the length of side 2: ");
    scanf("%lf", &side2);
    
    printf("Enter the length of the hypotenuse: ");
    scanf("%lf", &hypotenuse);

    // Check if it satisfies the Pythagorean theorem
    if((side1 * side1 + side2 * side2 == hypotenuse * hypotenuse) ||
        (side1 * side1 + hypotenuse * hypotenuse == side2 * side2) ||
        (side2 * side2 + hypotenuse * hypotenuse == side1 * side1)) {
        printf("It is a right-angle triangle.\n");
    }else{
        printf("It is not a right-angle triangle.\n");
    }

    return 0;
}