#include <stdio.h>
int main()
{
    int hindi, english, mathes, scince, result, per;
    char a;
    printf("Enter hindi marks : ");
    scanf("%d", &hindi);

    printf("Enter english marks : ");
    scanf("%d", &english);

    printf("Enter mathes marks : ");
    scanf("%d", &mathes);

    printf("Enter scince marks : ");
    scanf("%d", &scince);

    per = (hindi + english + mathes + scince) / 4;
    // printf("parsantage = %d\n", per);
    if (hindi < 40 && english < 40 || hindi < 40 && scince < 40 || hindi < 40 && mathes || english < 40 && scince < 40 || english < 40 && mathes < 40 || mathes < 40 && scince < 40)
    {
        printf("You fail ! ");
    }

    else if (hindi < 40)
    {
        printf("Supply in hindi ");
    }
    else if (english < 40)
    {
        printf("Supply in english ");
    }
    else if (mathes < 40)
    {
        printf("Supply in mathes ");
    }
    else if (scince < 40)
    {
        printf("Supply in scince ");
    }
    else if (per < 40)
    {
        printf("parsantage = %d\n", per);
        printf("Fail please try next time");
    }
    else if (per >= 40 && per < 60)
    {
        printf("parsantage = %d\n", per);
        printf("Pass in third divison ");
    }
    else if (per >= 60 && per < 75)

    {
        printf("parsantage = %d\n", per);
        printf("Pass in scond divison ");
    }
    else if (per >= 75 && per <= 100)
    {
        printf("parsantage = %d\n", per);
        printf("pass in first divison ");
    }
    else if (per > 100)
    {
        printf("Invalide input !");
    }

    return 0;
}