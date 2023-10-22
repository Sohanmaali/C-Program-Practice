#include <stdio.h>
int main()
{
    int i, num, fact = 1;
    printf("Enter a num ");
    scanf("%d", &num);
    i = 1;
    while (i <= num)
    {
        fact = fact * i;
        i++;
    }
    printf("%d is fact of %d", fact, num);
    return 0;
}