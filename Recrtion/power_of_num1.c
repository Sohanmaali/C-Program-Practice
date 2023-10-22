#include <stdio.h>
int power(int base, int exp)
{
    int pow;
    if (base == 1 || exp == 1)
        return base;
    pow = base * power(base, exp - 1);
    return pow;
}

int main()
{
    int base, expond;
    printf("Enter a num : ");
    scanf("%d", &base);

    printf("Enter a num : ");
    scanf("%d", &expond);

    printf("POwer of %d to %d = %d ", base, expond, power(base, expond));

    return 0;
}