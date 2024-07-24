//Q.10 find the area of a rectangle prism formula: A=2(wl+hl+hw)
#include <stdio.h>

int main() {
    int w,l,h,a;
    printf("\nenter width for triangle w= ");
    scanf("%d", &w);
    printf("\nenter length for triangle l= ");
    scanf("%d", &l);
    printf("\nenter height for triangle h= ");
    scanf("%d", &h);
    a=2*(w*l+h*l+h*w);
    printf("area of rectangular = %d", a);
    

    return 0;
}