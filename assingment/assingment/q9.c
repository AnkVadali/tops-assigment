//Q.9 Find circumference of triangle formula: triangle =a+b+c
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("\nenter value of a =");
    scanf("%d", &a);
    printf("\nenter value of b =");
    scanf("%d", &b);
    printf("\nenter value of c =");
    scanf("%d", &c);
    int tri = a + b + c;
    printf("circumference of triangle = %d" , tri);
    
}