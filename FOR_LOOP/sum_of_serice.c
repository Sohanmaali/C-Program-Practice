// Write a program in C# Sharp to display the sum of the series [ 1+x+x^2+x^3+....].

#include <stdio.h>
#include <math.h>
int main()
{
    double power, sum = 0;
    int i, j, turm, x;
    printf("Enter value of x : ");
    scanf("%d", &x);
    printf("Enter turm : ");
    scanf("%d", &turm);
    for (i = 1; i <= turm - 1; i++)
    {
        power = pow(x, i);
        printf("%.2lf\n", power);
        sum = sum + power;
    }
    printf("sum of : %d", sum);
    return 0;
}