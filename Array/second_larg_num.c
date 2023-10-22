
/*----------------- Write a C program to find second largest element in an array. ------------------------------------*/

#include <stdio.h>
#define MAX_SIZE 100
int main()
{
    int i, size, max, slarg;
    int arry[MAX_SIZE];
    printf("Enter size of arry : ");
    scanf("%d", &size);

    max = arry[0];
    /*----------------- max num of array ------------------------------------*/

    for (i = 0; i < size; i++)
    {
        printf("Enter %d element of Arry : ", i + 1);
        scanf("%d", &arry[i]);
    }
    for (i = 1; i < size; i++)
    {
        if (arry[i] > max)
        {
            max = arry[i];
        }
    }

    printf("%d\n", max);
    /*----------------- slarg num of array ------------------------------------*/

    slarg = arry[0];
    for (i = 1; i < size; i++)
    {
        if (arry[i] > slarg && arry[i] < max)
        {
            slarg = arry[i];
        }
    }

    printf("\n%d", slarg);
    return 0;
}