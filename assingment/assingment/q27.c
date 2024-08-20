//Q27.

#include <stdio.h>

int main() {
    int days;
    printf("Enter the number of days: ");
    scanf("%d", &days);

    int months = days / 30; 
    int remaining_days = days % 30;

    printf("%d days is equal to %d months and %d days\n", days, months, remaining_days);

    return 0;
}