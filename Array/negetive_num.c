// Write a C program to print all negative elements in an array.
#include <stdio.h>
int main()
{
    int i, size;
    printf("Enter size of arry : ");
    scanf("%d", &size);
    int arry[size];
    for (i = 0; i < size; i++)
    {
        printf("Enter %d element of Arry : ", i + 1);
        scanf("%d", &arry[i]);
    }
    for (i = 0; i < size; i++)
    {
        if (arry[i] < 0)
        {
            printf("%d, ", arry[i]);
        }
    }

    return 0;
}