#include <stdio.h>
int main()
{
    int i, num, table;
    printf("Emter a num : ");
    scanf("%d", &num);
    for (i = 1; i <= 10; i++)
    {
        table = num*i;
        printf("%d X %d = %d\n", num, i, table);
    }

    return 0;
}