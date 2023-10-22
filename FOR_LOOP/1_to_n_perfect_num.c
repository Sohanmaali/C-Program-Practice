#include <stdio.h>

int main()
{
    int i, j, num, sum;
    printf("Enter a num : ");
    scanf("%d", &num);
    printf("perfect numbers = ");
    for (i = 1; i <= num; i++)
    {
        sum = 0;
        for (j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum = sum + j;
            }
        }
        if (sum == i)
        {
            printf("%d ", i);
        }
    }
    return 0;
}