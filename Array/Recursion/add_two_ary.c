#include <stdio.h>
#define max_size 1000
int add_ary(int ary[], int i, int l)
{
    int ans = 0;
    if (i == l)
    {
        return 0;
    }

    // add_ary(ary, i + 1, l); // function call itsheelf recursivliy
    // ans = ans + ary[i];
    return (ary[i] + add_ary(ary, i + 1, l)); // sum of array elements
}

int main()
{
    int arry[max_size];
    int size, i;

    printf("enter size of array : ");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        printf("Enter %d element of array : ", i + 1);
        scanf("%d", &arry[i]);
    }

    printf("sum of array = %d ", add_ary(arry, 0, size)); // print sum of array

    return 0;
}