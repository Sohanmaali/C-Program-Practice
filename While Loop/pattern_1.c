/*
 *
 **
 ***
 ****
 *****
 */
#include <stdio.h>
int main()
{
    int i, j, row;
    printf("Enter num of row : ");
    scanf("%d", &row);
    i = 1;
    while (i <= row)
    {
        j = 1;
        while (j <= i)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}