//Q30.

#include <stdio.h>

int years_to_days(int years) {
    return years * 365;
}

int days_to_years(int days) {
    return days / 365;
}

int main() {
    int years, days, choice;

    printf("Enter 1 to convert years to days or 2 to convert days to years: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter the number of years: ");
        scanf("%d", &years);
        printf("%d years is equal to %d days\n", years, years_to_days(years));
    } else if (choice == 2) {
        printf("Enter the number of days: ");
        scanf("%d", &days);
        printf("%d days is equal to %d years\n", days, days_to_years(days));
    } else {
        printf("Invalid choice\n");
    }

    return 0;
}

