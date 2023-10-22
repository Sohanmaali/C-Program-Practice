// Online C compiler to run C program online

/*----------------- Write a C program to check given num is prime or not. ------------------------------------*/

#include <stdio.h>
// int count = 0;
int prime(int n, int m)
{

    if (n == 1 || m == 1)
    {
        return 1;
    }
    else
    {
        if (n % m == 0)
        {
            return 0;
        }
        else
        {
            return prime(n, m - 1);
        }
    }
}
/*----------------- main function start. ------------------------------------*/

int main()
{
    int num;
    printf("enter a num :");
    scanf("%d", &num);
    /*----------------- print num  is prime or not. ------------------------------------*/

    if (prime(num, num / 2) == 1) // function calling
    {
        printf("prime num");
    }
    else
        printf("NOt prime");
    return 0;
}
