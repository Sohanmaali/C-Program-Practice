#include <stdio.h>

int main()
{
    int n[100], m[100], i, j, max;

    for (i = 0; i < 6; i++)
    {
        printf("Enter %d element of array : ", i + 1);
        scanf("%d", &n[i]);
    }
    for (i = 0; i < 6; i++)
    {
        for (j = i + 1; j < 6; j++)
        {
            if (n[i] < n[j])
            {
                max = n[i];
                n[i] = n[j];
                n[j] = max;
            }
        }
    }
    for (i = 0; i < 6; i++)

        printf("%d ", n[i]);
    return 0;
}