#include <stdio.h>
int main()
{
    int a = 5, b;
    b = a;
    printf("b = %d", b);
    a += b;
    printf("b = %d", b);
    return 0;
}