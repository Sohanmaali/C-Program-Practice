#include <stdio.h>
int main()
{
    int num, freq, i, rem;
    int n0 = 0, n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0, n6 = 0, n7 = 0, n8 = 0, n9 = 0;
    printf("enter a num : ");
    scanf("%d", &num);
    while (num >= 0)
    {
        rem = num % 10;
        num /= 10;

        if (rem == 0)
        {
            n0 += 1;
        }
        if (rem == 1)
        {
            n1 += 1;
        }
        if (rem == 2)
        {
            n2 += 1;
        }
        if (rem == 3)
        {
            n3 += 1;
        }
        if (rem == 4)
        {
            n4 += 1;
        }
        if (rem == 5)
        {
            n5 = 1;
        }
        if (rem == 6)
        {
            n6 += 1;
        }
        if (rem == 7)
        {
            n7 += 1;
        }
        if (rem == 8)
        {
            n8 += 1;
        }
        if (rem == 9)
        {
            n9 += 1;
        }
        num /= 10;
    }
    printf("frequence of 0  = %d\n", n0);
    printf("frequence of  1 = %d\n", n1);
    printf("frequence of  2 = %d\n", n2);
    printf("frequence of  3 = %d\n", n3);
    printf("frequence of  4 = %d\n", n4);
    printf("frequence of  5 = %d\n", n5);
    printf("frequence of  6 = %d\n", n6);
    printf("frequence of  7 = %d\n", n7);
    printf("frequence of  8 = %d\n", n8);
    printf("frequence of  9 = %d\n", n9);

    return 0;
}