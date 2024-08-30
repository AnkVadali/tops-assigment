//Q.27:-

#include <stdio.h>
int main() {
    int n;
    double sum = 0.0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

        for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sum -= (double)i / (i + 1); // Subtract for even i
        } else {
            sum += (double)i / (i + 1); // Add for odd i
        }
    }

       printf("The sum of the series is: %.6f\n", sum);

    return 0;
}
