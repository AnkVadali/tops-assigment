//Q29.

#include <stdio.h>

int main() {
    int minutes;
    printf("Enter the number of minutes: ");
    scanf("%d", &minutes);

    int seconds = minutes * 60;
    printf("%d minutes is equal to %d seconds\n", minutes, seconds);

    int hours = minutes / 60;
    int remaining_minutes = minutes % 60;
    printf("%d minutes is equal to %d hours and %d minutes\n", minutes, hours, remaining_minutes);

    return 0;
}