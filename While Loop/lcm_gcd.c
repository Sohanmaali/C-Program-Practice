#include <stdio.h>
int main()
{
    int a, b, num1, num2, gcd, lcm;

    printf("Enter two num : ");
    scanf("%d%d", &num1, &num2);
    a = num1;
    b = num2;
    while (num1 != num2)
    {
        if (num1 > num2)
        {
            num1 = num1 - num2;
        }
        else
        {
            num2 = num2 - num1;
        }
    }
    gcd = num1;
    lcm = (a * b) / gcd;
    printf("%d is lcm \n gcd is %d", lcm, gcd);
    return 0;
}