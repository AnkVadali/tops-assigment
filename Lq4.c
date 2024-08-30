//Q.4:- WAP to make simple calculator (operation include Addition, Subtraction, ultiplication, Division, modulo) using conditional statement

#include <stdio.h>
int main() {
    int choice, num1, num2;
    printf(" Simple Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulo\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    switch (choice) {
        case 1:
            printf("Result: %d\n", num1 + num2);
            break;
        case 2:
            printf("Result: %d\n", num1 - num2);
            break;
        case 3:
            printf("Result: %d\n", num1 * num2);
            break;
        case 4:
            if (num2 != 0) {
                printf("Result: %d\n", num1 / num2);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;
        case 5:
            if (num2 != 0) {
                printf("Result: %d\n", num1 % num2);
            } else {
                printf("Error! Modulo by zero.\n");
            }
            break;
        default:
            printf("Error! Invalid choice.\n");
    }

    return 0;
}