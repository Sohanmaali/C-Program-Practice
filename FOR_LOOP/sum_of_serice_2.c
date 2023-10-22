// Write a program in C# Sharp to find the sum of the series [ x - x^3 + x^5 - x^7 + x^9 -.....]

#include <stdio.h>
#include <math.h>
int main()
{
    int i, turm, power;
    double x;
    printf("Enter value of x : ");
    scanf("%lf", &x);
    printf("Enter turm : ");
    scanf("%d", &turm);
    for (i = 0; i <= turm; i++)
    {
        power = pow(x, i + 2);
        printf("%d", power)
    }

    return 0;
}