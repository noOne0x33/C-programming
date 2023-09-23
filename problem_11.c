/***
 *write a program to make currency converter
 ***/

#include <stdio.h>

int main(){
    double rupees;

    //input amount in rupees
    printf("Enter the amount of rupees : ");
    scanf("%lf",&rupees);

    //Output rupees amount in another currency
    printf("amount in USD : $%lf\n",rupees*0.012);
    printf("amount in EURO : $%lf\n",rupees*0.011);
    printf("amount in BDT : $%lf\n",rupees*1.32);
    printf("amount in YEN : $%lf\n",rupees*1.79);
    printf("amount in RUBEL : $%lf\n",rupees*1.16);

    return 0;
}