#include <stdio.h>
int main()
{
    int num, first, last;
    printf("Enter a num : ");
    scanf("%d", &num);
    last = num % 10;
    while (num > 0)
    {
        first = num % 10;
        num /= 10;
    }
    printf("first = %d\nlast = %d", first, last);
    return 0;
}