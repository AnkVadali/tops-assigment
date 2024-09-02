#include <stdio.h>

int main() {
    char names[5][20];  //20 characters
    int i;

    printf("Enter 5 students' names:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        scanf("%19s", names[i]); 
    }

    printf("Names of the students:\n");
    for (i = 0; i < 5; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}