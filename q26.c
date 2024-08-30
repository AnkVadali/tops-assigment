//Q.26:- (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)

#include <stdio.h>
int main() {
    int n, totalSum = 0;
    
    printf("Enter a positive integer: ");
    scanf("%d", &n);

        for (int i = 1; i <= n; i++) {
        totalSum += i * (i + 1) / 2;
    }
        printf("The sum of the series is: %d\n", totalSum);

    return 0;
}
