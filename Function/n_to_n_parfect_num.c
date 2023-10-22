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
    int num1, num2, temp;
    printf("Enter first num : ");
    scanf("%d", &num1);

    printf("Enter second num : ");
    scanf("%d", &num2);
    for (int i = num1; i <= num2; i++)
    {
        temp = i;
        if (parfect(i) == temp)
        {
            printf("%d ", i);
        }
    }

    return 0;
}