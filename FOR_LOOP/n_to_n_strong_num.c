/*
Write a C program to print all Strong numbers between 1 to n.
*/

#include <stdio.h>
int main()
{
    int i, j, fect, sum, num, n1, n2, temp, rem;
    printf("Enter starting num :");
    scanf("%d", &n1);
    printf("Enter starting num :");
    scanf("%d", &n2);
    for (i = n1; i <= n2; i++)
    {
        sum = 0;
        num = i;
        while (i > 0)
        {
            rem = i % 10;
            fect = 1;
            for (j = 1; j <= rem; j++)
            {
                fect *= j;
            }
            sum += fect;
            i /= 10;
        }
        if (num == sum)
        {
            printf("%d", num);
        }
    }

    return 0;
}