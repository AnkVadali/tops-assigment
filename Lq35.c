//Q.35:-  Accept the input month number and print number of days in that month. 

#include <stdio.h>
int main() {
    int month;

    printf("Enter the month number: ");
    scanf("%d", &month);

    
    if (month < 1 || month > 12) {
        printf("Invalid month number.\n");
        }

        switch (month) {
        case 2:
                if (((1970 + month - 1) % 4) == 0) {
                printf("Number of days in month %d: 29\n", month);
            } else {
                printf("Number of days in month %d: 28\n", month);
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("Number of days in month %d: 30\n", month);
            break;
        default:
            printf("Number of days in month %d: 31\n", month);
            break;
    }

    return 0;
}