/***
*Write a program to do operations like addition,subtraction,division,multiplication
***/
#include <stdio.h>

int main(){
    int a,b;
    printf("Enter number a and b : ");
    scanf("%d %d",&a,&b);
    printf("Addition : %d \n",a + b);
    printf("Subtraction : %d \n",a - b);
    printf("Division : %f\n",(float)a / b);
    printf("Multiplication : %d\n",a * b);
    return 0;
}