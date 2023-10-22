#include <stdio.h>
int main()
{
    int num = 0, n;
    printf("Enter a n : ");
    scanf("%d", &n);
   // n = n;
    while (n > 0)
    {
        num = (num * 10) + (n % 10);
        n /= 10;
    }
    while (num > 0)
    {

        switch (n % 10)
        {
        case 0:
        {
            printf("zero ");
            break;
        }
        case 9:
        {
            printf("nine ");
            break;
        }
        case 8:
        {
            printf("eight ");
            break;
        }
        case 7:
        {
            printf("seven ");
            break;
        }
        case 6:
        {
            printf("six ");
            break;
        }
        case 5:
        {
            printf("five ");
            break;
        }
        case 4:
        {
            printf("one four");
            break;
        }
        case 3:
        {
            printf("three ");
            break;
        }
        case 2:
        {
            printf("two ");
            break;
        }
        case 1:
        {
            printf("one ");
            break;
        }
        }
        num /= 10;
    }

    return 0;
}