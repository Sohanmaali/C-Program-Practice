#include <stdio.h>

int main()
{
    int n, i, a = 1, b = 0, sum = 0;
    printf("Enter num : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        sum = a + b;
        printf("%d, ", sum);
        b = a;
        a = sum;
    }

    return 0;
}