#include <stdio.h>

void printHello(int n) {
    if (n <= 0) {
        return;
    }
    //counter initialization with 1
    int count = 0;

    //defining lable
    L1:
    printf("Hello World!\n");
    count++;
    if(count<n)
        goto L1;
}

int main() {
    int n;
    printf("Enter the number of times to print 'Hello, World!': ");
    scanf("%d", &n);

    printHello(n);

    return 0;
}