#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 1; i <= 3; i++)
    {
        for (j = 3; j >= i; j--)
        {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}