#include <stdio.h>
#define max_size 1000
int main()
{
    int n, rem, n0 = 0, n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0, n6 = 0, n7 = 0, n8 = 0, n9 = 0;

    printf("Enter a num : ");
    scanf("%d", &n);
    while (n != 0)
    {
        rem = n % 10;

        if (rem == 0)
        {
            n0++;
        }
        if (rem == 1)
        {
            n1++;
        }
        if (rem == 2)
        {
            n2++;
        }
        if (rem == 3)
        {
            n3++;
        }
        if (rem == 4)
        {
            n4++;
        }
        if (rem == 5)
        {
            n5++;
        }
        if (rem == 6)
        {
            n6++;
        }
        if (rem == 7)
        {
            n7++;
        }
        if (rem == 8)
        {
            n8++;
        }
        if (rem == 9)
        {
            n9++;
        }
        n /= 10;
    }
    printf("frequance of 0 = %d\n", n0);
    printf("frequance of 1 = %d\n", n1);
    printf("frequance of 2 = %d\n", n2);
    printf("frequance of 3 = %d\n", n3);
    printf("frequance of 4 = %d\n", n4);
    printf("frequance of 5 = %d\n", n5);
    printf("frequance of 6 = %d\n", n6);
    printf("frequance of 7 = %d\n", n7);
    printf("frequance of 8 = %d\n", n8);
    printf("frequance of 9 = %d\n", n9);
    return 0;
}