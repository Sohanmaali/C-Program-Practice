/*
5
44
333
2222
11111
*/

#include <stdio.h>
int main()
{
    int i, j, row;
    printf("Enter num of row : ");
    scanf("%d", &row);
    i = row;
    while (i >= 1)
    {
        j = i;
        while (j <= row)
        {
            printf("%d", i);
            j++;
        }
        printf("\n");
        i--;
    }

    return 0;
}