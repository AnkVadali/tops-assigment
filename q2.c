//Q.2:- WAP to accept 5 numbers from user and display all numbers

#include <stdio.h>
int main() {
    int numbers[5];
    int i;

    printf("Enter 5 numbers: \n");
    for(i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    printf("You entered: \n");
    for(i = 0; i < 5; i++) {
        printf("Number %d: %d\n", i + 1, numbers[i]);
    }
    return 0;
}