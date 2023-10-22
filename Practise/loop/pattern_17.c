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
        a = 65;
        for (k = 1; k <= i; k++)
        {
            printf("%c", a);
            a++;
        }

        printf("\n");
    }

    return 0;
}