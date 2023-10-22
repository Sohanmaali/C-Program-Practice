#include <stdio.h>

int main()
{
    int amount;
    int not500, not200, not100, not50, not20, not10, not5, not2, not1;
    printf("enter amount : ");
    scanf("%d", &amount);
    if (amount >= 500)
    {
        not500 = amount / 500;   //for count not of 500
        printf("500 = %d\n", not500);
        amount = amount - 500 * not500;   //for mines amount 500*not500
    }
    if (amount >= 200)
    {
        not200 = amount / 200;
        printf("200 = %d\n", not200);
        amount -= 200 * not200;
    }
    if (amount >= 100)
    {
        not100 = amount / 100;
        printf("100 = %d\n", not100);
        amount -= 100 * not100;
    }
    else if (amount >= 50)
    {
        not50 = amount / 50;
        printf("50 = %d\n", not50);
        amount -= 50 * not50;
    }
    else if (amount >= 20)
    {
        not20 = amount / 20;
        printf("20 = %d\n", not20);
        amount -= 20 * not20;
    }
    if (amount >= 10)
    {
        not10 = amount / 10;
        printf("10 = %d\n", not10);
        amount -= 10 * not10;
    }
    if (amount >= 5)
    {
        not5 = amount / 5;
        printf("5 = %d\n", not5);
        amount -= 5 * not5;
    }
    if (amount >= 2)
    {
        not2 = amount / 2;
        printf("2 = %d\n", not2);
        amount -= 2 * not2;
    }
    if (amount >= 1)
    {
        not1 = amount;
        printf("1 = %d\n", not1);
    }
    return 0;
}