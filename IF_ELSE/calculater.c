#include <stdio.h>
int main()
{
    int num1, num2, result, rem;
    char a;
    printf("Enter A operator for any operation :( + - * / )\n");
    scanf("%c", &a);
    printf("Enter first num : ");
    scanf("%d", &num1);
    printf("Enter sconde num : ");
    scanf("%d", &num2);
    if (a == '+')
    {
        result = num1 + num2;
        printf("%d + %d = %d", num1, num2, result);
    }
    else if (a == '-')
    {
        result = num1 - num2;
        printf("%d - %d = %d", num1, num2, result);
    }
    else if (a == '*')
    {
        result = num1 * num2;
        printf("%d * %d = %d", num1, num2, result);
    }
    else if (a == '/')
    {
        result = num1 / num2;
        rem = num1 % num2;
        printf("%d / %d = %d \n", num1, num2, result);
        if (rem > 1)
        {
            printf("reminder = %d", rem);
        }
    }
    else
    {
        printf("Operator Error ! please a carect operator ");
    }

    return 0;
}