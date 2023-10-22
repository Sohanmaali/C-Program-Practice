/*-------------------Write a program in C to find a pair with given sum in the array-------------------*/

#include <stdio.h>
#define max_size 1000
int main()
{
    int arry[max_size];
    int size, sum, i, j;

    printf("Enter size of array : ");
    scanf("%d", &size);
    /*----------------- take element of array ------------------------------------*/

    for (i = 0; i < size; i++)
    {
        printf("Enter %d element of array : ", i + 1);
        scanf("%d", &arry[i]);
    }
    printf("enter two num sum of array : ");
    scanf("%d", &sum);

    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arry[i] + arry[j] == sum)
            {
                printf("%d, %d\n", arry[i], arry[j]);
            }
        }
    }
    return 0;
}