#include <stdio.h>
int main()
{
    int i, j, k, num, c = 0;
    printf("Enter a num : ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        //k = i;
        c=0;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                c += 1;
            }
        }
        // printf("%d\t", k);
        // break;
        if (c == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}