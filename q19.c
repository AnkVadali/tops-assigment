//  print the full pyramid pattern of stars:
#include <stdio.h>
int main()
{
    int rows = 5;

        for (int i = 0; i < rows; i++) {

        for (int j = 0; j < 2 * (rows - i) - 1; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

//  print the Floyd's Triangle
#include <stdio.h>
int main()
{
    int rows = 5;
    int n = 1;

        for (int i = 0; i < rows; i++) {

        for (int j = 0; j <= i; j++) {
            printf("%d ", n++);
        }
        printf("\n");
    }
    return 0;
}
//Alphabet p1
#include <stdio.h>
int main() {
    int i, j;
    char ch = 'A';

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf(" %c", ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}
//Alphabet p2
#include <stdio.h>
int main() {
    int n = 5; 
    
    for (int i = 1; i <= n; i++) {
        for (char ch = 'A'; ch < 'A' + i; ch++) {
            printf(" %c", ch);
        }
        printf("\n");
    }

    return 0;
}
//num p2
#include <stdio.h>
int main() {
    int n = 5; 

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            if (j % 2 == 0) {
                printf(" 1");
            } else {
                printf(" 0");
            }
        }
        printf("\n");
    }

    return 0;
}

