

// C Program to convert decimal number to binary

#include <stdio.h>
int convert(int);
int main()
{
    int num, oct;
    printf("Enter a num : ");
    scanf("%d", &num);
    oct = convert(num);
    printf("Decimal to bainari = %d", oct);

    return 0;
}

int convert(int n)
{
    int ans = 0;
    int rem, i = 1;
    while (n != 0)
    {
        rem = n % 8;
        n /= 8;
        ans += rem * i;
        i *= 10;
    }
    return ans;
}