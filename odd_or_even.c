/***
* Write a program to check whether the given number is odd or even
*/

#include <stdio.h>

int main(){
    int n;

    //Input the number
    printf("Enter the number : ");
    scanf("%d",&n);

    //Check if number is even or odd
    if(n % 2 == 0){
        printf("%d is a even number\n",n);
    }else{
        printf("%d is a odd number\n",n);
    }
            
    return 0;
}