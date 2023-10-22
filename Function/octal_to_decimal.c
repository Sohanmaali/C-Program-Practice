

// C Program to convert octal number to decimal

#include <stdio.h>
#include <math.h>
int convert(int);
int main()
{
    int num, deci;
    printf("Enter a num : ");
    scanf("%d", &num);
    deci = convert(num);
    printf("octal to decimal = %d", deci);

    return 0;
}

int convert(int n)
{
    int ans = 0, rem, i = 0;
    while (n != 0)
    {
        rem = n % 10;
        ans += rem * pow(8, i);
        n /= 10;
        ++i;
    }
    return ans;
}