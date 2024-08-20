// Q.18-Calculate person's annual salary:
   #include <stdio.h>

int main() {
    float monthly_salary, annual_salary;

    // Input monthly salary
    printf("Enter the monthly salary: ");
    scanf("%f", &monthly_salary);

    // Calculate annual salary
    annual_salary = monthly_salary * 12;

    // Output annual salary
    printf("Annual salary is: %.2f\n", annual_salary);

    return 0;
}


