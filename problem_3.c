/***
*Write a program to take the name, program ID Mail from the User and *displays the details and while displaying print the approx age of the user
***/

#include <stdio.h>

int main(){
    char name[50];
    char programme[20];
    char Mail_Id[50];
    int  birth_date;
    printf("Enter Your Name : ");
    scanf("%s",&name);
    printf("\nEnter Programme : ");
    scanf("%s",&programme);
    printf("\nEnter MailID : ");
    scanf("%s",&Mail_Id);
    printf("\nEnter Your BirthYear :");
    scanf("%d",&birth_date);
    printf("\nYour are %d Years old",2023-birth_date);
    return 0;
}