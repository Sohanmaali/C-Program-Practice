#include <stdio.h>
#define max_size 1000
int main()
{
    int i, j, k;
    for (i = 1; i <= 5; i++)
    {
        for (j = 3; j >= i; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}