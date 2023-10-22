#include <stdio.h>
int main()
{
    int year;
    printf("Enter A year : ");
    scanf("%d", &year);
    printf("You enterd %d\n", year);
    if (year % 400 == 0)
    {
        printf("Enterd Year is Leap year ");
    }
    else if (year % 100 == 0)
    {
        printf("Enterd Year is not Leap year ");
    }
    else if (year % 4 == 0)
    {
        printf("Enterd Year is Leap year ");
    }
    else
    {
        printf("Enterd Year is not Leap year ");
    }
}