
/*----------------- program in C to Finf HCF of two num ------------------------------------*/

#include <stdio.h>
/*----------------- function declaretion ------------------------------------*/

int hcf(int n, int m)
{
    while (n != m)
    {
        if (n > m)
        {
            n -= m;
        }
        else
            m -= n;
    }
    return m;
}
/*----------------- main function start ------------------------------------*/

int main()
{
    int num1, num2;
    printf("Enter two num : ");
    scanf("%d %d", &num1, &num2);

/*----------------- function call and print HCF & LCM ------------------------------------*/

    printf("HCF = %d", hcf(num1, num2));

    printf("\nLCM = %d", num1 * num2 / hcf(num1, num2));

    return 0;
}