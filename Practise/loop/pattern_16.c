#include <stdio.h>
#define max_size 1000
int main()
{
    int n, i, j,k;
    printf("Enter num of row : ");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n-i; j++)
        {
            printf(" ");
        }
        for ( k = 1; k <= n; k++)
        {
            printf("*");
        }
        
        printf("\n");
    }

    return 0;
}