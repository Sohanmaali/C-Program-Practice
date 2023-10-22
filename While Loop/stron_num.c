#include <stdio.h>
int main()
{
    int fect, sum = 0, num, temp,i, rem;
    printf("enter a num : ");
    scanf("%d", &num);
    temp = num;
    while (num>0)
    {
        i = 1;
        fect = 1;
        rem = num % 10;
        while (i <= rem)
        {
            fect = fect * i;
            i++;
        }
        sum += fect;
        num /= 10;
    }
    if (sum == temp)
    {
        printf("strong num");
    }
    else
    {
        printf("not strong");
    }
    return 0;
}