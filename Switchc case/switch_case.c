#include <stdio.h>

int main()
{
    float num1, num2, ans, m, d, s, sadh;
    int choice;
    printf("Enter your choice");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
    {
        printf("Enter first num : ");
        scanf("%f", &num1);
        printf("enter second num : ");
        scanf("%f", &num2);
        ans = num1 + num2;
        printf("your ans is %f", ans);
        break;
    }
    case 2:
    {
        printf("enter mooldhan : ");
        scanf("%f", &m);
        printf("enter dar : ");
        scanf("%f", &d);
        printf("enter time : ");
        scanf("%f", &s);
        sadh = m * d * s / 100;
        printf("Sadharan byaj = %f", sadh);
        break;
    }
    }
    return 0;
}