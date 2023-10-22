#include <stdio.h>
// check whether a given number is positive or negative.
int main()
{
    int num;
    printf("Enter a num : ");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("%d is positive number", num);
    }
    else if (num == 0)
    {
        printf("%d is naturel number", num);
    }
    else
    {
        printf("%d is negative number", num);
    }
    return 0;
}