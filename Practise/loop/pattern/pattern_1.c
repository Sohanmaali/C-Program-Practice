
/*
 *
 * *
 *   *
 *     *
 * * * * *
 */

#include <stdio.h>
#define max_size 1000
int main()
{
    int i, j, row;
    printf("Enter num of row : ");
    scanf("%d", &row);
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i == j || j == 1 || i == row)
                printf("* ");
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}