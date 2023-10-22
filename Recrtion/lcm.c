

/*----------------- Write a program in C to find the LCM of two numbers using recursion. ------------------------------------*/
#include <stdio.h>
/*----------------- function for GCD ------------------------------------*/

int gcd(int n, int m)
{
    int gc;
    if (n == m)
    {
        return n;
    }
    else
    {
        if (n > m)
        {
            gc = gcd(n - m, m);
        }
        else
        {
            gc = gcd(n, m - n);
        }
    }
    return gc;
}

/*----------------- function for LCM ------------------------------------*/
int lcm(int a, int b)
{
    int lc;
    lc = (a * b) / (gcd(a, b));
    return lc;
}
/*----------------- main Function start ------------------------------------*/
int main()
{
    int num1, num2, lc, gc;
    printf("Enter first number : ");
    scanf("%d", &num1);

    printf("Enter second number : ");
    scanf("%d", &num2);

    /*----------------- function call ------------------------------------*/
    gc = gcd(num1, num2);
    lc = lcm(num1, num2);

    /*----------------- prinf GCD & LCM ------------------------------------*/
    printf("GCD = %d\n", gc);
    printf("LCM = %d", lc);

    return 0;
}