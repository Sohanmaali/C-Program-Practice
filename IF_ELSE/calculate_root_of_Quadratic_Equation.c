#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, d;
    double x1, x2, y1, y2;
    printf("Enter value of A, B, C : ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Value of A = %d\n", a);
    printf("Value of B = %d\n", b);
    printf("Value of C = %d\n", c);
    d = b * b - 4 * a * c;
    if (d > 0)
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("Root of quadratic Equation = %.2lf\n", x1);
        printf("Root of quadratic Equation = %.2lf", x2);
    }

    else if (d == 0)
    {
        x1 = -b / (2 * a);
        x2 = x1;
        printf("Root of quadratic Equation = %.2lf\n", x1);
        printf("Root of quadratic Equation = %.2lf", x2);
    }
    /* else
     {
         y1 = -b / (2 * a);
         y2 = sqrt(d) / (2 * a);
         printf("root1 = %.2lf+%.2lfi\nroot2 = %.2f-%.2fi", y1, y2, y1, y2);
     }
 */
    return 0;
}