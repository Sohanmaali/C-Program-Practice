#include <stdio.h>
#define max_size 1000
int main()
{
    int year;

    printf("Enter a year : ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        printf("Leap year ");
    }
    else
    {
        printf("Normal year ");
    }

    return 0;
}