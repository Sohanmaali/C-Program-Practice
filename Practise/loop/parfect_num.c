#include <stdio.h>
#define max_size 1000
int main()
{
    int n1, i, sum = 0;
    printf("Enter a num : ");
    scanf("%d", &n1);
    for (i = 1; i < n1; i++)
    {
        if (n1 % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n1)
    {
        printf("Arnstrong num");
    }
    else
    {
        printf("not Arnstrong num");
    }

    return 0;
}