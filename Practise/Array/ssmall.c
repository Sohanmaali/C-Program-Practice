#include <stdio.h>

int main()
{
    int n[100], num, i, j, small, ssmall;
    printf("Enter size of array : ");
    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {
        printf("Enter %d element of array : ", i + 1);
        scanf("%d", &n[i]);
    }
    small = n[0];

    ssmall = n[0];

    for (i = 0; i < num; i++)
    {
        if (n[i] < small)
        {
            ssmall = small;
            small = n[i];
        }

        else if (n[i] < ssmall && n[i] != small)
        {
            ssmall = n[i];
        }
    }
    printf("%d \n", small);

    printf("%d ", ssmall);

    return 0;
}
