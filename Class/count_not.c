#include <stdio.h>
int main()
{
    int amount, n500, n200, n100, n50, n20, n10, n5, n2, n1;
    printf("Enter a amount : ");
    scanf("%d", &amount);

    n500 = amount / 500;
    amount %= 500;
    printf("not 500 = %d\n", n500);

    n200 = amount / 200;
    amount %= 200;
    printf("not 200 = %d\n", n200);

    n100 = amount / 100;
    amount %= 100;
    printf("not 100 = %d\n", n100);

    n50 = amount / 50;
    amount %= 50;
    printf("not 50 = %d\n", n50);

    n20 = amount / 20;
    amount %= 20;
    printf("not 20 = %d\n", n20);

    n10 = amount / 10;
    amount %= 10;
    printf("not 10 = %d\n", n10);

    n5 = amount / 5;
    amount %= 5;
    printf("not 5 = %d\n", n5);

    n2 = amount / 2;
    amount %= 2;
    printf("not 2 = %d\n", n2);

    n1 = amount;
    printf("not 1 = %d\n", n1);

    return 0;
}