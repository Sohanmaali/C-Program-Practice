#include <stdio.h>
int parfect(int n)
{
    int j, sum = 0;

    for (j = 1; j < n; j++)
    {

        if (n % j == 0)
        {

            sum += j; // 1,3,6,
        }
    }

    return sum;
}
int main()
{
    int num, i;

    printf("Enter a num : ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        if (parfect(i) == i)
            printf("%d, ", i);
    }
    return 0;
}