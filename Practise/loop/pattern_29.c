#include <stdio.h>

int main()
{
    int n, i, j, k, a;
    printf("Enter num of row : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (k = 1; k <= n - i; k++)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            if (i == 1 || j == i || j == n || i == n)
                printf("* ");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}