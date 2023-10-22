#include <stdio.h>
#define max_size 1000
int main()
{
    int i, n, j, k;
    printf("Enter num of row : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j < i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= n - i; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}