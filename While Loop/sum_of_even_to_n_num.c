#include <stdio.h>
int main()
{
    int i, num, sum = 0, even;
    printf("Enter a num : ");
    scanf("%d", &num);
    i = 1;
    while (i <= num)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
        i++;
    }
    printf("Sum = %d", sum);
    return 0;
}