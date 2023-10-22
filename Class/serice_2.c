/* 1   2   4  6  9   12  16   20  25 */
#include <stdio.h>
#define max_size 1000
int main()
{
    int n, i, j, k, sum = 0, temp = 0;
    printf("Enter a num : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        temp = 0;
        for (j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                if (j > temp)
                {

                    temp = j;
                }
                sum += j;

                printf("%d, ", sum);
            }
        }
    }

    return 0;
}