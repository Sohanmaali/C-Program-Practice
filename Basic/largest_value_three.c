/*
#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter three num : ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 > num2 && num1 > num3)
    {
        printf("%d is largest num", num1);
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("%d is largest num", num2);
    }
    else if (num3 > num1 && num3 > num2)
    {
        printf("%d is largest num", num3);
    }
}
*/
#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter three num : ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("%d is largest num", num1);
        }
        else
        {
            printf("%d is largest num ", num3);
        }
    }
    else
    {
        if (num2 > num3)
        {
            printf("%d is largest num", num2);
        }
        else
        {
            printf("%d is largest num ", num3);
        }
    }
}