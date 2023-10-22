#include <stdio.h>
int main()
{
    int i, num, turm, sum = 0;
    printf("Enter a num to want sum : ");
    scanf("%d", &turm);
    printf("The odd numbers are : ");

    for (i = 1; i <= turm; i++)
    {
        num = 2 * i - 1;
        printf("%d\t", num);
        sum += num;
    }

    printf("\nsum of odd num = %d", sum);
    return 0;
}
