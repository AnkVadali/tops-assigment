//Q.2 write a program to make simple calculator
#include <stdio.h>
int main()
{
int a, b, add,sub,mul,divi,mod;
     printf("\nenter value of a = ");
     scanf("%d", &a);
     printf("\nenter value of b = ");
     scanf("%d", &b);
     add = a+b;
     sub = a-b;
     mul = a*b;
     divi = a/b;
     mod = a%b;
     printf("\n addition = %d ", add);
     printf("\n substraction = %d ", sub);
     printf("\n multiplication = %d ", mul);
     printf("\n division = %d ", divi);
     printf("\n Modulos = %d ", mod);
     

     

    return 0;



}