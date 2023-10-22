#include <stdio.h>
int even_num(int);
int odd_num(int);
int main()
{
    int n, temp;

    printf("Enter a num : ");
    scanf("%d", &n);

    printf("Even num = ");
    even_num(n);

    printf("\nOdd num = ");
    odd_num(n);

    return 0;
}
int even_num(int a)
{

    if (a == 2)
    {
        return printf("%d ", a);
    }
    else
    {
        even_num(a - 1);
        if (a % 2 == 0)
        {

            printf("%d ", a);
        }
    }
    return 0;
}
int odd_num(int a)
{

    if (a == 1)
    {
        return printf("%d ", a);
    }
    else
    {
        odd_num(a - 1);
        if (a % 2 != 0)
        {

            printf("%d ", a);
        }
    }
    return 0;
}