//Q.11:- . Accept 5 names from user at run time. 

#include <stdio.h>

int main() {
    char names[5][100]; // assuming max length of name is 100

    printf("Enter 5 names:\n");

    for (int i = 0; i < 5; i++) {
        printf("Name %d: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);
    }

    printf("\nYou entered the following names:\n");

    for (int i = 0; i < 5; i++) {
        printf("%s", names[i]);
    }

    return 0;
}