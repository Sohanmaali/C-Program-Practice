#include <stdio.h>
int main()
{
    int ang1, ang2, ang3, sum = 0;
    printf("Enter a three angel : ");
    scanf("%d %d %d", &ang1, &ang2, &ang3);
    sum = ang1 + ang2 + ang3; // calculate sum of angels
    if (sum == 180)
    {
        printf("The trangale is valide");
    }
    else
    {
        printf("The trangale is not valide");
    }

    return 0;
}