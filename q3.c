//Q.3:- WAP to take 10 no. Input from user find out below values 
//a. How many Even numbers are there 
//b. How many odd numbers are there 
//c. Sum of even numbers 
//d. Sum of odd numbers 

#include <stdio.h>
int main() {
    
    int num[10], evenCount = 0, oddCount =  0, evenSum = 0, oddSum = 0;
    printf("Enter 10 numbers:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
    }

    for(int i = 0; i < 10; i++) {
        if(num[i] % 2 == 0) {
            evenCount++;
            evenSum += num[i];
        } else {
            oddCount++;
            oddSum += num[i];
        }
    }
    printf("a. Number of even numbers: %d\n", evenCount);
    printf("b. Number of odd numbers: %d\n", oddCount);
    printf("c. Sum of even numbers: %d\n", evenSum);
    printf("d. Sum of odd numbers: %d\n", oddSum);

    return 0;
}