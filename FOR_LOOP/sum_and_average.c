#include <stdio.h>
int main()
{
    int i, num, sum = 0, aver, n;
    printf("enter numbers for numbers 1 to  n : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("Enter numbers : ");
        scanf("%d", &num);
        sum += num;
    }
    aver = sum / n;

    printf("\nsum of numbers %d", sum);
    printf("\naverage of numbers %d", aver);
    return 0;
}