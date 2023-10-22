
// C Program to convert decimal number to binary

#include <stdio.h>
int convert(int);
int main()
{
    int num, bin;
    printf("Enter a num : ");
    scanf("%d", &num);
    bin = convert(num);
    printf("Decimal to bainari = %d", bin);

    return 0;
}

int convert(int n)
{
    int ans = 0, rem, i = 1;
    while (n != 0)
    {
        rem = n % 2;

        n = n / 2;

        ans = ans + rem * i;

        i = i * 10;
    }
    return ans;
}