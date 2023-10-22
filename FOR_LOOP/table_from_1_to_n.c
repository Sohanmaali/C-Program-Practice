#include <stdio.h>
int main()
{
    int i, j, num, table;
    printf("Enter a num to want table : ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            table = i * j;
            printf("%d X %d = %d\n", i, j, table);
        }
        printf("________\n");
    }
    return 0;
}