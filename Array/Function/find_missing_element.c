/*----------Write a program in C to find the missing number in a given array.----------*/

#include <stdio.h>
#define max_size 1000
/*---------function diclaretion-------------*/
int missing_element(int ary[], int size)
{
    int sum = 0, sum1 = 0, i, n = size + 1;
    for (i = 0; i < size; i++)
    {
        sum += ary[i];
    }
    return sum1 = (n * (n + 1) / 2) - sum;
}
/*---------------main function start----------------*/
int main()
{
    int arry[max_size];
    int size, i, sum = 0, sum1 = 0;

    printf("Enter size of array : ");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        printf("Enter %d alement of array : ", i + 1);
        scanf("%d", &arry[i]);
    }
    printf("Missing elemet = %d", missing_element(arry, size)); // finction calling and print missing element
    return 0;
}