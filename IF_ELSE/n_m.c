#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter a num : ");
    scanf("%d", &m);
    if (m != 0)
    {
        if (m > 0)
        {
            n = -1;
            printf("%d", n);
        }
        else
        {
            n = 1;
            printf("%d", n);
        }
    }
    else
    {
        n = 0;
        printf("%d", n);
    }

    return 0;
}