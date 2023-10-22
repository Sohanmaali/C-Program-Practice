// Write a C program to find sum of all array elements.
#include <stdio.h>
#define MAX_SIZE 100
int main()
{
    int i, size, sum = 0;
    int arry[MAX_SIZE];
    printf("Enter size of arry : ");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        printf("Enter %d element of Arry : ", i + 1);
        scanf("%d", &arry[i]);
    }
    for (i = 0; i < size; i++)
    {
        sum = sum + arry[i];
    }
    printf("sum of arry is = %d", sum);
    return 0;
}