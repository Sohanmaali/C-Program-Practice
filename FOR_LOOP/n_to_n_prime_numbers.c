#include <stdio.h>
int main()
{
    int i, j, start, end, temp;
    printf("Enter starting sun : ");
    scanf("%d", &start);

    printf("Enter ending sun : ");
    scanf("%d", &end);
    for (i = start; i <= end; i++)
    {
        for (j = 1; j <= i; j++)
        {

            temp = 0;
            temp = j % 2;
            if (temp != 0)
            {
                printf("%d ", temp);
            }
        }
    }

    return 0;
}