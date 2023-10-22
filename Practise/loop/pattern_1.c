#include <stdio.h>
#define max_size 1000
int main()
{
    int i, j, num;
    printf("Enter row num : ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}