//Q.15:- Calculate sum of 10 numbers using of while loop.

#include <stdio.h>
int main() {
    int i = 1;
    int sum = 0;
    int num;
    while (i <= 10) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        sum += num;i++;
    }
    printf("Sum of 10 numbers is: %d\n", sum);

    return 0;
}