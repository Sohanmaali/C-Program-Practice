#include <stdio.h>
// Write a C# Sharp program to find the eligibility of admission for a professional course based on the following criteria
int main()
{
    int math, phy, chem, total, total1;
    printf("Enter marks of mathes & physics & chemestry : ");
    scanf("%d %d %d", &math, &phy, &chem);
    total = math + phy;
    total1 = math + chem;
    if ((math + phy + chem) >= 180)
    {
        printf("The candidate is eligible for admission.");
    }

    else if (total >= 140)
    {
        printf("The candidate is eligible for admission.");
    }

    else if (total1 >= 140)
    {
        printf("The candidate is eligible for admission.");
    }
    else
    {
        printf("The candidate is not eligible for admission.");
    }
    return 0;
}