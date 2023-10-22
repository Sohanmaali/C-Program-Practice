#include <stdio.h>
int main()
{
    int i, j, row;
    printf("Enter num of row : ");
    scanf("%d", &row);
    i = row;
    while (i >= 1)
    {
        j =row ;
        while (j >= i)
        {
            printf("%d", j);
            j--;
        }
        printf("\n");
        i--;
    }

    return 0;
}