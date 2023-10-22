#include <stdio.h>
int main()
{
    int i, j, num;
    printf("Enter a num you want print pattern : ");
    scanf("%d", &num);
    for (i = 0; i <= num; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}