#include <stdio.h>
int main()
{
    int i, num1 = 10, sum = 0;
    for (i = 0; i < num1; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }
    printf("Sum of given num = %d", sum);
    return 0;
}