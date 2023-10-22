#include <stdio.h>

int main()
{
    int n, i, j, sum = 0;

    printf("Enter ending num : ");
    scanf("%d", &n);

    for (i = 1, j = 1; i < n; i++)
    {
        sum += j;
        j++;
        printf("%d ", sum);
    }

    return 0;
}