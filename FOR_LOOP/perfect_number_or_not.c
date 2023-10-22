// Write a C# Sharp program to check whether a given number is perfect number or not

#include <stdio.h>
int main()
{
    int num, i, sum = 0;
    printf("Enter a num : ");
    scanf("%d", &num);
    for (i = 1; i < num; i++)
    {
        if (num % i == 0)

        {
            sum = sum + i;
        }
    }
    if (sum == num)
    {
        printf("number is perfect number.");
    }
    else
    {
        printf("number is not perfect number.");
    }

    // printf("number is perfect number.");

    return 0;
}