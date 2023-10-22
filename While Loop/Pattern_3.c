/*
1
22
333
4444
55555
 */
#include <stdio.h>
int main()
{
    int i, j, k, row;
    printf("Enter num of row : ");
    scanf("%d", &row);
    i = 1;
    while (i <= row)
    {
        j = 1;
        while (j <= i)
        {
            printf("%d", i);
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}