#include <stdio.h>
#define max_size 1000
int main()
{
    int n, rem, i, rev = 0;

    printf("Enter a num : ");
    scanf("%d", &n);
    for (i = n; n != 0; n = n / 10)
    // while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        // n /= 10;
    }
    printf("After reverse %d ", rev);

    return 0;
}