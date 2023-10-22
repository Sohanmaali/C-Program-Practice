/*
//*****
// ****
//  ***
//   **
//    *
*/

#include <stdio.h>
int main()
{
    int i, j, k, num;
    printf("Enter num of row : ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j < i; j++)
        {
            printf(" ");
        }
        for (k = num; k >= i; k--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}