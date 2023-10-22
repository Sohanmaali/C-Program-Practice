#include <stdio.h>
int main()
{
    int num, count = 0;
    printf("Enter a num : ");
    scanf("%d", &num);

    while (num > 0)
    {
        count += 1;
        num /= 10;
    }
    printf("digit in num = %d", count);
    return 0;
}