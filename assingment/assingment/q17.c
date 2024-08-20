
#include<stdio.h>

int main() {
    float basic_salary, gross_salary, HRA, DA;

    printf("Enter the basic salary: ");
    scanf("%f", &basic_salary);
    
    //
    printf("enter the gross_salary: ");
    scanf("%f", &gross_salary);
    
    printf("enter the house rent allownce: ");
    scanf("%f", &HRA);
    
    printf("enter the daily allownce: ");
    scanf("%f", &DA);
    
    gross_salary = basic_salary + HRA + DA;
    printf("Gross Salary is: %.2f\n", gross_salary);

    return 0;
}