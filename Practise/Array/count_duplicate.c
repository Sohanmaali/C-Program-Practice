#include <stdio.h>

int main()
{
    int n[100], num, i, j, count = 0;
    printf("Enter size of array : ");
    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {
        printf("Enter %d element of array : ", i + 1);
        scanf("%d", &n[i]);
    }

    for (i = 0; i < num; i++)
    {
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
    }
    printf("%d ", count);
    return 0;
}