//Q24.

#include <stdio.h>

int main() {
    int i;
    char names[5][20 ];
    float salaries[5], total = 0, average;

        for (i = 0; i < 5; i++) {
        printf("Enter employee %d name: ", i + 1);
        scanf("%s", names[i]);
        printf("Enter employee %d salary: ", i + 1);
        scanf("%f", &salaries[i]);
        total += salaries[i];
    }
    average = total / 5;
    printf("\nEmployee Names and Salaries:\n");
    for (i = 0; i < 5; i++) {
        printf("Employee %d: %s - Salary: %.2f\n", i + 1, names[i], salaries[i]);
    }
    printf("Total Salary: %.2f\n", total);
    printf("Average Salary: %.2f\n", average);

    return 0;
}
