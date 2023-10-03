/***
* Write a program to check whether the input is positive or negative
*/

#include <stdio.h>

int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    if(n>0){
        printf("Positive\n");
    }else{
        printf("Negative\n");
    }
    return 0;
}