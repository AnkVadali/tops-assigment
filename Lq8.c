//Q.8:-  WAP to accept the height of a person in centimeters and categorize the person according to their height.

#include <stdio.h>
int main() {
    int height;

    printf("Input the height of the person (in centimeters): ");
    scanf("%d", &height);

    if (height < 150) {
        printf("The person is Dwarf.\n");
    } else if ((height >= 150) && (height < 165)) {
        printf("The person is average heighted.\n");
    } else if ((height >= 165) && (height <= 195)) {
        printf("The person is taller.\n");
    } else {
        printf("Abnormal height.\n");
    }

    return 0;
}