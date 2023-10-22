#include <stdio.h>

int main()
{
    int n, i, small = 0, gret = 0,dif;
    printf("Enter 5 num : ");
    for (i = 1; i < 5; i++)
    {
        scanf("%d", &n);
        if (n > gret)
        {
            gret = n;
        }
        if (i == 1)
        {
            small = n;
        }
        else if (n < small)
        {
            small = n;
        }
    }
    printf("small = %d\ngreter = %d\n", small, gret);
    dif = gret - small;
    printf("diff = %d", dif);
    return 0;
}