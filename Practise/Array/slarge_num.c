#include <stdio.h>

int main()
{
    int n[100], num, i, j, max, slarg;
    printf("Enter size of array : ");
    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {
        printf("Enter %d element of array : ", i + 1);
        scanf("%d", &n[i]);
    }
    max = n[0];

    slarg = n[0];

    for (i = 0; i < num; i++)
    {
        if (n[i] > max)
        {
            slarg = max;
            max = n[i];
        }

        else if (n[i] > slarg && n[i] != max)
        {
            slarg = n[i];
        }
    }
    printf("%d \n", max);

    printf("%d ", slarg);

    return 0;
}
