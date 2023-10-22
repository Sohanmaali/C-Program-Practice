#include <stdio.h>
int main()
{
    int num, temp, arm, rem, sum = 0;
    printf("Enter a num : ");
    scanf("%d", &num);
    temp = num;
    while (num > 0)
    {
        rem = num % 10;
        arm = rem * rem * rem;
        sum += arm;
        num /= 10;
    }
    if (temp == sum)
    {
        printf("armstrong");
    }
    else
    {
        printf("not armstrong");
    }

    return 0;
}