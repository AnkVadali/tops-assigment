//Q22.

#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, amount, compound_interest;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter annual interest rate (in %): ");
    scanf("%f", &rate);

    printf("Enter time (in years): ");
    scanf("%f", &time);

    amount = principal * pow((1 + rate/100), time);
    compound_interest = amount - principal;

    printf("Amount: %.2f\n", amount);
    printf("Compound Interest: %.2f\n", compound_interest);

    return 0;
}