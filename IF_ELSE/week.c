#include <stdio.h>

int main()
{
    int a;
    printf("Enter a value : ");
    scanf("%d", &a);
    printf("Enter value is %d \n", a);
    if (a == 1)
    {
        printf("Monday");
    }
    else if (a == 2)
    {
        printf("Tuesday");
    }
    else if (a == 3)
    {
        printf("Wednesday");
    }
    else if (a == 4)
    {
        printf("Thrasday");
    }
    else if (a == 5)
    {
        printf("Friday");
    }
    else if (a == 6)
    {
        printf("Saturday");
    }
    else if (a == 7)
    {
        printf("Sunday");
    }
    else
    {
        printf("Please enter a valid value");
    }
    return 0;
}