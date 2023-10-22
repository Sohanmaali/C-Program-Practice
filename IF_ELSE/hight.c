#include <stdio.h>
// Write a C# Sharp program to accept the height of a person in centimeter and categorize the person according to their height.
int main()
{
    int hight;
    printf("Enter your hight in cm : ");
    scanf("%d", &hight);
    if (hight >= 165)
    {
        printf("The person is taller.");
    }
    else if (hight >= 150 && hight < 165)
    {
        printf("The person is  average heighted.");
    }
    else if (hight >= 100 && hight < 150)

    {
        printf("The person is small.");
    }
    else if (hight > 0 && hight < 100)
    {
        printf("The person is very small.");
    }
    else
    {
        printf("please Enter a valide hight");
    }

    return 0;
}