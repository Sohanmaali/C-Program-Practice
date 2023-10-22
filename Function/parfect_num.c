#include <stdio.h>
int parfect(int i)
{
    int sum = 0, temp, j;
    // i = 6
    sum = 0;
    for (j = 1; j < i; j++)
    {

        if (i % j == 0)
        {
            sum += j;
        }
    }

    return (sum);
}
int main()
{
    int num1, temp;
    printf("Enter first num : ");
    scanf("%d", &num1);

    // printf("Enter second num : ");
    // scanf("%d", &num2);

    temp = num1;
    if (parfect(num1) == temp) // return parfect(num1) = sum
    {
        printf("parfect");
    }
    else
    {
        printf("not parfect");
    }

    return 0;
}