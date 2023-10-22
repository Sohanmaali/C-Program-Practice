#include <stdio.h>

int main()
{
    int n, i, j, k, a;
    printf("Enter num of row : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (k = 1; k <= n-i; k++)
        {
            printf("  ");
        }

        for (j = 1; j <= i; j++)
        {
            if (i == j || j == 1 | i == n)
            {

                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }

    return 0;
}