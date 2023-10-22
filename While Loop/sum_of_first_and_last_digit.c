#include <stdio.h>
int main()
{
    int num, sum = 0, last;
    printf("Enter a num : ");
    scanf("%d", &num);
    sum = num % 10;
    while (num > 0)
    {
        last = num % 10;
        num /= 10;
    }
    sum = sum + last;
    printf("sum = %d", sum);

    return 0;
}