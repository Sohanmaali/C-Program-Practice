// num_of_day_in_month
#include <stdio.h>
int main()
{
    int month;
    printf("Emter a num of month :");
    scanf("%d", &month);
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
    {
        printf("Month have 31 days\n");
    }
    break;
    case 2:
    {
        printf("The 2nd month is a February and have 28 days. \n");
        printf("in leap year The February month  Have 29 days.\n");
    }
    break;
    case 4:
    case 6:
    case 9:
    case 11:
    {
        printf("Month have 31 days");
    }
    break;
    default:
    {
        printf("Enter a valide num of month");
    }
    }
    return 0;
}