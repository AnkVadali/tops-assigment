//Q.24:- 1 + 2 + 3 + 4 + 5 + ... + n 

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