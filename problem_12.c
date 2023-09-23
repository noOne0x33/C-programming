/***
*write a program to solve all the algebraic identities
***/

#include <stdio.h>

int main() {
    int a,b,c;
    // Input in a,b,c
    printf("Enter value of a b c : ");
    scanf("%d %d %d",&a,&b,&c);

    // Identity 1: (a + b)^2 = a^2 + 2ab + b^2
    int result1 = a * a + 2 * a * b + b * b;
    printf("(a + b)^2 = %d\n", result1);

    // Identity 2: (a - b)^2 = a^2 - 2ab + b^2
    int result2 = a * a - 2 * a * b + b * b;
    printf("(a - b)^2 = %d\n", result2);

    // Identity 3: a^2 - b^2 = (a + b)(a - b)
    int result3 = (a + b) * (a - b);
    printf("a^2 - b^2 = %d\n", result3);

    // Identity 4: (a + b)^3 = a^3 + 3a^2b + 3ab^2 + b^3
    int result4 = a * a * a + 3 * a * a * b + 3 * a * b * b + b * b * b;
    printf("(a + b)^3 = %d\n", result4);

    // Identity 5: (a - b)^3 = a^3 - 3a^2b + 3ab^2 - b^3
    int result5 = a * a * a - 3 * a * a * b + 3 * a * b * b - b * b * b;
    printf("(a - b)^3 = %d\n", result5);

    // Identity 6: a^3 + b^3 = (a + b)(a^2 - ab + b^2)
    int result6 = (a + b) * (a * a - a * b + b * b);
    printf("a^3 + b^3 = %d\n", result6);

    // Identity 7: a^3 - b^3 = (a - b)(a^2 + ab + b^2)
    int result7 = (a - b) * (a * a + a * b + b * b);
    printf("a^3 - b^3 = %d\n", result7);

    // Identity 8: (a + b + c)^2 = a^2 + b^2 + c^2 + 2ab + 2ac + 2bc
    int result8 = a * a + b * b + c * c + 2 * a * b + 2 * a * c + 2 * b * c;
    printf("(a + b + c)^2 = %d\n", result8);

    // Identity 9: (a^2 + b^2) = (a + b)^2 - 2ab
    int result9 = result1 - 2 * a * b;
    printf("a^2 + b^2 = %d\n", result9);

    // Identity 10: (a^3 + b^3) = (a + b)(a^2 - ab + b^2)
    int result10 = result6;
    printf("a^3 + b^3 = %d\n", result10);

    // Identity 11: (a^3 - b^3) = (a - b)(a^2 + ab + b^2)
    int result11 = result7;
    printf("a^3 - b^3 = %d\n", result11);

    // Identity 12: a^2 + b^2 + 2ab = (a + b)^2
    int result12 = result1;
    printf("a^2 + b^2 + 2ab = %d\n", result12);

    // Identity 13: a^3 + b^3 + c^3 - 3abc = (a + b + c)(a^2 + b^2 + c^2 - ab - ac - bc)
    int result13 = (a + b + c) * (a * a + b * b + c * c - a * b - a * c - b * c);
    printf("a^3 + b^3 + c^3 - 3abc = %d\n", result13);

    return 0;
}