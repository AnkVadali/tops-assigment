//Q.20:- WAP program to print below output using for loop 1 to 50.

#include <stdio.h>
int main() {
    int rows = 5;  
    int columns = 10; 
    int startNumber = 1; 

    for (int i = 0; i < rows; i++) { 
        for (int j = 0; j < columns; j++) { 
            
            printf("%02d ", startNumber);
            startNumber++; 
        }
        printf("\n"); 
    }

    return 0;
}
