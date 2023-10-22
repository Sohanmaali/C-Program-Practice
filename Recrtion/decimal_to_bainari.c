

// C Program to convert decimal number to binary

#include <stdio.h>
int ans = 0, rem, i = 1;
int convert(int);
int main()
{
    int num, bin;
    printf("Enter a num : ");
    scanf("%d", &num);

    // bin = convert(num);
    printf("Decimal to bainari = %d", convert(num));

    return 0;
}

int convert(int n)
{
    // int ans = 0, rem, i = 1;
    if (n != 0)
    //     return n;
    // else
    {
        rem = n % 2;
        ans = ans + rem * i;
        i = i * 10;
        convert(n / 2);
    }
    return ans;
}