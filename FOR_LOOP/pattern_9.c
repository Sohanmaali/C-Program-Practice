/*   1
    2 2
   3 3 3
  4 4 4 4
 5 5 5 5 5*/

#include <stdio.h>
int main()
{
    int i, j, k, row;
    printf("Enter num of row : ");
    scanf("%d", &row);
    for (i = 1; i <= row; i++)
    {
        for (j = row; j >= i; j--)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}