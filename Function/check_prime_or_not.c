

// Write a program in C to check whether a number is a prime number or not using the function.

#include <stdio.h>
int prime(int a)
{
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            return 0;
        }
    }

    return 1;
}
int main()
{
    int num;
    printf("enter a num : ");
    scanf("%d", &num);
    if (prime(num))
    {
        printf("Enter num is prime");
    }
    else
    {
        printf("Enter num is not prime");
    }

    return 0;
}