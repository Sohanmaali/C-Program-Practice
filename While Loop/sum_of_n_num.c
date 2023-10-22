#include <stdio.h>
int main()
{
    int i, num, sum = 0;
    printf("Enter a num : ");
    scanf("%d", &num);
    i = 1;
    while (i <= num)
    {
        sum += i;
        i++;
    }
    printf("Sum of n num = %d", sum);
    return 0;
}