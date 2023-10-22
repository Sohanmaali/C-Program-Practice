#include <stdio.h>

int main()
{
    int n[100], m[100], num, i, j, count;

    printf("Enter size of array : ");
    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {
        printf("Enter %d element of array : ", i + 1);
        scanf("%d", &n[i]);
    }

    for (i = 0; i < num; i++)
    {
        count = 0;
        if (n[i] > 0)
        {
            for (j = i + 1; j < num; j++)
            {
                if (n[i] == n[j])
                {
                    count++;
                    n[j] = -1;
                }
            }
        }
        if (count == 0)
        {
            if (n[i] > 0)
                printf("%d ", n[i]);
        }
    }

    return 0;
}