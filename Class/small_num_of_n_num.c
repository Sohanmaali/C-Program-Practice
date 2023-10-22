#include <stdio.h>

int main()
{
    int n, i, j, small, temp;
    printf("Enter 5 num : ");
    for (i = 1; i <= 5; i++)
    {
        scanf("%d", &n);

        if (i == 1)
        {
            temp = n;
        }
        else if (n < temp)
        {
            temp = n;
        }
    }
    printf("%d", temp);
    return 0;
}