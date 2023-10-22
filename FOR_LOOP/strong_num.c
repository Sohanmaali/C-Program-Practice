/*
Write a C program to check a num is strong or not 
*/

#include <stdio.h>
int main()
{
    int i, rem, num, fect = 1, sum, temp;
    printf("Enter a num : ");
    scanf("%d", &num);
    temp = num;
    sum = 0;
    while (num > 0)
    {

        rem = num % 10;
        fect = 1;
        for (i = 1; i <= rem; i++)
        {
            fect *= i;
        }
        sum += fect;
        num /= 10;
    }
    if (sum == temp)
    {
        printf("strong");
    }
    else
    {
        printf("not strong");
    }

    return 0;
}