/*
Write a program in C# Sharp to display the pattern like a diamond. Go to the editor

    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *

*/

#include <stdio.h>
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
        for (k = 1; k < i * 2; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = row - 1; i >= 1; i--)
    {
        for (j = row; j > i; j--)
        {
            printf(" ");
        }
        for (k = 1; k < i * 2; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}