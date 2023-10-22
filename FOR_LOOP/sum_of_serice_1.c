//// Write a program in C# Sharp to display the sum of the series [ 1+x+x^2/2!+x^3/3!+....].
#include <stdio.h>
#include <math.h>
int main()
{
    int x, i, turm;
    double sum = 0, ans, fect = 1;
    printf("Entar value of x : ");
    scanf("%d", &x);
    printf("Enter turm : ");
    scanf("%d", &turm);
    for (i = 1; i < turm; ++i)
    {
        fect = fect * i;
        ans = pow(x, i) / (float)fect;
        sum = sum + ans;
    }
    printf("Final ans = %.2lf", sum + 1);

    return 0;
}
