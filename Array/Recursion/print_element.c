#include <stdio.h>
#define max_size 1000

int p_element(int ary[], int s, int i)
{
    // int i;
    if (s == i)
    {
        return ary[i];
    }

    printf("%d ", ary[s]);
    p_element(ary, s + 1, i);

    return 0;
}

int main()
{
    int arry[max_size];
    int size, i;

    printf("Enter size of array : ");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        printf("Enter %d element of array : ", i + 1);
        scanf("%d", &arry[i]);
    }
    p_element(arry, 0, size);
    return 0;
}