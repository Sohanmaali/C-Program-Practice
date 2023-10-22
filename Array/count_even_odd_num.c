/*-------------Write a C program to count even and odd elements in an array---------*/
#include <stdio.h>
#define max_size 1000
int main()
{
    int arry[max_size], arry1[max_size];
    int size, sum, i, j, count = 0, odd = 0, even = 0;

    printf("Enter size of array : ");
    scanf("%d", &size);

    /*----------------- take element of array ------------------------------------*/
    for (i = 0; i < size; i++)
    {
        printf("Enter %d element of array : ", i + 1);
        scanf("%d", &arry[i]);
    }

    /*----------------- count even odd element in array------------------------------------*/

    for (i = 0; i < size; i++)
    {
        // for (j = i + 1; j < size; j++)
        // {
        if (arry[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        // }
    }
    printf("%d even elment in array\n%d odd element in array", even, odd);
    return 0;
}