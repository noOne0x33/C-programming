/***
 * write a program in c to convert kb to mb,gb,tb in size
 */
#include <stdio.h>

int main() {
    long long int kb;
    double mb, gb, tb;

    // Input the size in kilobytes from the user
    printf("Enter the size in kilobytes (KB): ");
    scanf("%lld", &kb);

    // Convert to megabytes (MB)
    mb = (double)kb / (1024);

    // Convert to gigabytes (GB)
    gb = mb / (1024);

    // Convert to terabytes (TB)
    tb = gb / (1024);

    // Display the results
    printf("Size in megabytes (MB): %.2lf MB\n", mb);
    printf("Size in gigabytes (GB): %.2lf GB\n", gb);
    printf("Size in terabytes (TB): %.2lf TB\n", tb);

    return 0;
}