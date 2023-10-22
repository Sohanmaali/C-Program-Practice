#include <stdio.h>
int mainO()
{
    int num1, sum = 0;
    printf("Enter num to want sum");
    scanf("%d", &num1);
    printf("You entered num is : %d ", num1);
    for (int i = 0; i < num1; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    printf("Sum of odd num = %d", sum);
    return 0;
}