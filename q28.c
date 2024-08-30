//Q.28:-

#include <stdio.h>
int main() {
    int n;
    int currentTerm = 1;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

       for (int i = 1; i <= n; i++) {
        if (i <= 3) {
        currentTerm = i;
        } else {
        currentTerm *= 3;
        }
        printf("%d ", currentTerm);
    }

    printf("\n");

    return 0;
}
