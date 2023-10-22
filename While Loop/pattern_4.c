/*
55555
4444
333
22
1
 */
#include <stdio.h>
int main()
{
    int i, j, k, row;
    printf("Enter num of row : ");
    scanf("%d", &row);
    i = row;
    while (i >= 1)
    {
        j = 1;
        while (j <= i)
        {
            printf("%d", i);
            j++;
        }
        printf("\n");
        i--;
    }

    return 0;
}