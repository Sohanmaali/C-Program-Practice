#include <stdio.h>
#define max_size 1000
int main()
{
    int n1, i, j, temp, rem, fect, sum = 0;

    printf("Enter a num : ");
    scanf("%d", &n1);
    for (i = 1; i <= n1; i++)
    {
        sum = 0;
        temp = i;
        while (temp != 0)
        {
            rem = temp % 10;
            fect = 1;
            for (j = 1; j <= rem; j++)
            {
                fect *= j;
            }
            sum += fect;
            temp /= 10;
        }
        if (sum == i)
        {
            printf("%d, ", i);
        }
    }

    return 0;
}