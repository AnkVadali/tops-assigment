//Q.6 Find area of triangle formula: A = 6a2
#include <stdio.h>

int main() {
    int b,h;
    int tri;
     printf("\nenter a width for triangle = ");
     scanf("%d", &b);
     printf("\nenter a height for triangle = ");
     scanf("%d", &h);
     tri = 1/2 * b * h;
     printf("\narea of triangle is= %d", tri);
     

    return 0;
}