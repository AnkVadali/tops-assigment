//Q.19:- Write a program in C to calculate and print the electricity bill of a given customer. 
//The customer ID, name, and unit consumed by the user should be captured from the keyboard to display the total amount to be paid 
//to the customer. 

#include <stdio.h>

int main() {
    int customerID;
    char customerName[50];
    float unitsConsumed, totalAmount;

 printf("Enter Customer ID: ");
    scanf("%d", &customerID);

    printf("Enter Customer Name: ");
    scanf("%s", customerName);

    printf("Enter units consumed: ");
    scanf("%f", &unitsConsumed);

    if (unitsConsumed <= 350) {
        totalAmount = unitsConsumed * 1.20;
    } else if (unitsConsumed <= 600) {
        totalAmount = unitsConsumed * 1.50;
    } else if (unitsConsumed <= 800) {
        totalAmount = unitsConsumed * 1.80;
    } else {
        totalAmount = unitsConsumed * 2.00;
    }

    if (totalAmount > 400) {
        totalAmount = totalAmount + (totalAmount * 0.15);
    }

    if (totalAmount < 100) {
        totalAmount = 100;
    }

    printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %.2f\n", unitsConsumed);
    printf("Total Amount: %.2f\n", totalAmount);

    return 0;
}