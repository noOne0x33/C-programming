/***
*Write a program to print the address of 5 variable and changes the value of first
*variable by taking an input from the user.
***/
#include <stdio.h>
int main(){
    int a,b,c,d,e;
    a = 10;
    b = 20;
    c = 30;
    d = 40;
    e = 50;
    printf("The address of variable a : [%p]\n",&a);
    printf("The address of variable b : [%p]\n",&b);
    printf("The address of variable c : [%p]\n",&c);
    printf("The address of variable d : [%p]\n",&d);
    printf("The address of variable e : [%p]\n",&e);
    printf("Value of A before change : %d\n",a);
    printf("Enter the value : ");
    scanf("%d",&a);
    printf("Value of A after change : %d",a);
    return 0;
}
