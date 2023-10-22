/* Write a program in C# Sharp to print the Floyd's Triangle. Go to the editor
1
01
101
0101
10101 */

#include <stdio.h>
int main()
{
    int i, j, num, row;
    printf("Enter num of row : ");
    scanf("%d", &row);
    for (i = 0; i <= row; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
        }
        printf("\n");
    }

    return 0;
}