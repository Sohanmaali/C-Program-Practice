#include <stdio.h>

int main()
{
    int n, i, j, k, a;
    printf("Enter num of row : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i + j == n + 1|| j == 1 || i == 1)
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