#include <stdio.h>
#define max_size 1000
int main()
{
    int n, i, j, k, a;
    printf("Enter num of row : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
            a = 1;
        for (k = 1; k <= 2 * i - 1; k++)
        {
            printf("%d", a);
            a++;
        }

        printf("\n");
    }

    return 0;
}