/*----------------------C Program to Find Product of Two Numbers using Recursion-----------*/
#include <stdio.h>
int product(int n, int m)
{
    int pro;
    if (m == 0)
    {
        return 0;
    }

    pro = n + product(n, m - 1);

    return pro;
}
/*---------------------- main function start-----------*/

int main()
{
    int num1, num2;
    printf("Enter first num : ");
    scanf("%d", &num1);

    printf("Enter second num : ");
    scanf("%d", &num2);

    /*---------------------- function call and print value-----------*/

    printf("product of %d * %d = %d", num1, num2, product(num1, num2));
    return 0;
}