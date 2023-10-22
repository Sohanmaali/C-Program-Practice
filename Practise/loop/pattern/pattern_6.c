//     *
//    * *
//   * * *
//  * * * *
// * * * * *

#include <stdio.h>
#define max_size 1000
int main()
{
    int i, j, k, row;
    printf("Enter num of row : ");
    scanf("%d", &row);
    for (i = 1; i <= row; i++)
    {
        for (j = row; j > i; j--)
        {
            printf(" ");
        }
        for (k = 1; k <= row; k++)
        {
            if (k == row || k == 1 || i == row ||)
            {

                printf("* ");
            }
        }
        printf("\n");
    }

    return 0;
}