//Q28.

#include <stdio.h>

int main() {
    int years;
    printf("Enter the number of years: ");
    scanf("%d", &years);

    int days = years * 365; // assuming 365 days in a year (ignoring leap years)
    int months = days / 30; // assuming 30 days in a month
    int remaining_days = days % 30;

    printf("%d years is equal to %d days, %d months and %d days\n", years, days, months, remaining_days);

    return 0;
}