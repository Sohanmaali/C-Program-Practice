#include <stdio.h>
#define max_size 1000
int main()
{
    int n1, n2, gcd;
    printf("Enter two num : ");
    scanf("%d %d", &n1, &n2);
    while (n1 != n2)
    {
        if (n1 > n2)
        {
            n1 = n1 - n2;
        }
        else
        {
            n2 = n2 - n1;
        }
    }
    gcd = n1;
    printf("GCD = %d", gcd);
    return 0;
}