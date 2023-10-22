#include <stdio.h>
#define max_size 1000
int main()
{
    int n1, i, j;
    scanf("%d", &n1);
    for (i = 1; i <= n1; i++)
    {
        for (j = 1; j <= n1-i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}