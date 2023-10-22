#include <stdio.h>
int main()
{
    int num, i, rem, sum = 0;
    printf("Enter a num : ");
    scanf("%d", &num);
    i = 1;
    while (num > 0)
    {
        rem = num % 10;
        sum += rem;
        num /= 10;
        i++;
    }
    printf("sum of given nums digit = %d", sum);
    return 0;
}