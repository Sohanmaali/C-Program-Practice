

// Write a C program to find power of any number using recursion.
#include <stdio.h>
int power(int, int);
int main()
{
    int base, exponent, powe;

    printf("Enter a num : ");
    scanf("%d", &base);

    printf("Enter a num : ");
    scanf("%d", &exponent);

    powe = power(base, exponent);
    printf("power of %d ^ %d = %d", base, exponent, powe);

    return 0;
}
int power(int n1, int n2)
{
    int pow;
    if (n2 == 1)
        return n1;
    pow = power(n1, n2 / 2);
    if (n2 % 2 == 0)
    {
        return pow * pow;
    }
    else
        return pow * pow * n1;
}