//Conditional Logic Programs:
//Q.1:- Write a C program to accept two integers and check whether they are equal or not.

#include <stdio.h>
int main() {
    int num1, num2;

    printf("Enter first integer: ");
    scanf("%d", &num1);

    printf("Enter second integer: ");
    scanf("%d", &num2);

       if (num1 == num2) {
        printf("The two integers are equal.\n");
    } else {
        printf("The two integers are not equal.\n");
    }

    return 0;
}