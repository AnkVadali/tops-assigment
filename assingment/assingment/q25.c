//Q25.

#include <stdio.h>

int main() {
    float expenses[5];
    float sum = 0.0;
    float average;

        for (int i = 0; i < 5; i++) {
        printf("Enter expense %d: ", i + 1);
        scanf("%f", &expenses[i]);
        sum += expenses[i];
    }
     average = sum / 5.0;
     printf("Average expense: %.2f\n", average);

    return 0;
}