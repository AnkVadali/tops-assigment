//Q.16:- Calculate the Sum of Natural Numbers Using the While Loop 

#include <stdio.h>
int main() {
    int num, sum = 0, i = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    while (i <= num) {
        sum += i;i++;
    }
    printf("Sum of natural numbers from 1 to %d is: %d\n", num, sum);

    return 0;
}