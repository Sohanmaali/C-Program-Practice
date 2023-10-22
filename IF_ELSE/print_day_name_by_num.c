#include <stdio.h>
#include <ctype.h>
int main()
{
    int num;
    printf("Enter a num 1 to 7 : ");
    scanf("%d", &num);
    if (num == 1)
    {
        printf("monday");
    }
    else if (num == 2)
    {
        printf("tuesday");
    }
    else if (num == 3)
    {
        printf("wednesday");
    }
    else if (num == 4)
    {
        printf("thrasday");
    }
    else if (num == 5)
    {
        printf("friday");
    }
    else if (num == 6)
    {
        printf("satarday");
    }
    else if (num == 7)
    {
        printf("sunday");
    }
    else
    {
        printf("Enter a valide num");
    }
    return 0;
}