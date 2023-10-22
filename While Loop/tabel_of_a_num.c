#include <stdio.h>
int main()
{
    int i, num, tab;
    printf("Enter a num : ");
    scanf("%d", &num);
    i = 1;
    while (i <= 10)
    {
        tab = num * i;
        printf("%d * %d = %d\n", num, i, tab);
        i++;
    }

    return 0;
}