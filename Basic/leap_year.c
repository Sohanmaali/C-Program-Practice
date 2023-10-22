#include <stdio.h>
int main()
{
    int year;
    printf("Enter a year : ");
    scanf("%d", &year);
    printf("You enterd year is %d ", year);
    if (year % 4 == 0)
    {
        printf("Enter year is leap year");
    }

    else
    {
        printf("Enter num is leap year");
    }
    return 0;
}