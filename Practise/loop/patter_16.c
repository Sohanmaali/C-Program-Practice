#include <stdio.h>
int main()
{
    int i, j, k, n;
    printf("Enter num of row : ");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        for (j = 1; j < n; j++)
        {
            if (i > 1 && i < n - 1 && j > 1 && j < n - 1)

            {
                printf("  ");
            }
            else
                printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}