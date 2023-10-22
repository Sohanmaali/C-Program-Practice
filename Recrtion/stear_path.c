#include <stdio.h>
int steae_path(int);
int main()
{
    int num;
    printf("Enter a num : ");
    scanf("%d", &num);

    int ways = steae_path(num);

    printf("%d", ways);

    return 0;
}
int steae_path(int n)
{
    int way;
    if (n == 0)
        return 1;
    if (n < 0)
    {
        return 0;
    }

    way = steae_path(n - 1) + steae_path(n - 2);

    return way;
}
