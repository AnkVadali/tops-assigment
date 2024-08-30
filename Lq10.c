//Q.10:- . WAP to check whether a number is negative, positive or zero. 

#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num );

    if (num > 0) {
        printf("Number is POSITIVE");
    } else if (num < 0) {
        printf("Number is NEGATIVE");
    } else {
        printf("Number is ZERO");
    }

    return 0;
}