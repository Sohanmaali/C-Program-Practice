/*
******
*****
****
***
**
*
*/

#include <stdio.h>
int main()
{
    int i, j, num;
    printf("enter num of row : ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        for (j = num; j >= i; j--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}