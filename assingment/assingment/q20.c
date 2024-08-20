//q20.
#include <stdio.h>
int main() {
    
    float salary, insurance, loan, remaining;
    printf("Enter your monthly salary: ");
    scanf("%f", &salary);

    insurance = salary * 0.10;
    loan = salary * 0.10;
    remaining = salary - (insurance + loan);

    printf("Monthly Salary: %.2f\n", salary);
    printf("Insurance Premium (10%%): %.2f\n", insurance);
    printf("Loan Installment (10%%): %.2f\n", loan);
    printf("Remaining Amount: %.2f\n", remaining);

    return 0;
}