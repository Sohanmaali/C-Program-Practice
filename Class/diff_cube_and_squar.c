#include <stdio.h>
int main()
{
    int num1 = 5, sqr, cube, dif;
    sqr = num1 * num1;
    cube = num1 * num1 * num1;
    dif = cube - sqr;
    printf("diffrance of sqr & cube = %d", dif);
    return 0;
}