#include <stdio.h>

int main()
{
    int n[100], n1, num, i, j, swap;

    printf("Enter size of array : ");
    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {
        printf("Enter %d element of array : ", i);
        scanf("%d", &n[i]);
    }

    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num - i - 1; j++)
        {
            if (n[j] > n[j + 1])
            {
                swap = n[j];
                n[j] = n[j + 1];
                n[j + 1] = swap;
            }
        }
    }
    for (i = 0; i < num; i++)
    {
        printf("%d ", n[i]);
    }
    return 0;
}
