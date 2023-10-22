#include <stdio.h>
int main()
{
    int i, count, n;
    printf("Enter starting sun : ");
    scanf("%d", &n);

    count = 0;
    for (i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 1)
    {
        printf("prime num");
    }
    else
    {
        printf("not prime num");
    }

    return 0;
}