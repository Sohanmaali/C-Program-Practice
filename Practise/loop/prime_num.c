#include <stdio.h>
#define max_size 1000
int main()
{
    int n1, i, j, count;
    printf("Enter num : ");
    scanf("%d", &n1);
    for (i = 1; i < n1; i++)
    {
        count = 0;
        for (j = 2; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 1)
        {
            printf("%d, ", i);
        }
        }

    return 0;
}