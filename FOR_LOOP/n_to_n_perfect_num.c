#include <stdio.h>
int main()
{
    int i, j, sum, start, end;
    printf("Enter starting num : ");
    scanf("%d", &start);

    printf("Enter Ending num : ");
    scanf("%d", &end);
    for (i = start; i <= end; i++)
    {
        sum = 0;
        for (j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum += j;
            }
        }
        if (sum == i)
        {
            printf("%d ", i);
        }
    }

    return 0;
}