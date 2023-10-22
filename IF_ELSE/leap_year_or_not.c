#include <stdio.h>
int main()
{
    int year;
    printf("Enter a Year : ");
    scanf("%d", &year);
    if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
    {
        printf("%d is leap year :", year);
    }
    /*else if (year % 4 == 0)
    {
        printf("%d is leap year :", year);
    }
     else if (year % 100 == 0)
     {
         printf("%d is not leap year :", year);
     }*/
    else
    {
        printf("%d is normal year :", year);
    }
    return 0;
}