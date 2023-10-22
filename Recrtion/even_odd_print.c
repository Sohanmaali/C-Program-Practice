
/*----------------- write a program to print Enen odd num goven range ------------------------------------*/

#include <stdio.h>
/*----------------- Function for Print even num------------------------------------*/

int p_even(int n, int m)
{

    if (m > n)
    {
        p_even(n, m - 1); // function call recartivly
    }

    if (m % 2 == 0)
    {
        printf("%d, ", m);
    }
    return 0;
}
/*----------------- Function for Print odd num------------------------------------*/

int p_odd(int n, int m)
{

    if (m > n)
    {
        p_odd(n, m - 1); // function call recartivly
    }

    if (m % 2 != 0)
    {
        printf("%d, ", m);
    }
    return 0;
}
/*----------------- main function start------------------------------------*/

int main()
{
    int num1, num2;
    printf("Enter first num : ");
    scanf("%d", &num1);

    printf("Enter second num : ");
    scanf("%d", &num2);

    printf("even num = ");
    p_even(num1, num2); // function call

    printf("\nodd num = ");
    p_odd(num1, num2); // function call

    return 0;
}
