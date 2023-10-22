#include <stdio.h>

int main()
{
    int n1, i, sum = 0;

    printf("Enter a num : ");
    scanf("%d", &n1);
    for (i = 1; i <= n1; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
    }
    printf("%d", sum);
    return 0;
}