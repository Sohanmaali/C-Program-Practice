// C Program to convert bainari number to decimal


#include <stdio.h>
#include <math.h>

int convert(int);
int main()
{
    int num, ans;
    printf("Enter a num : ");
    scanf("%d", &num);
    ans = convert(num);
    printf("bainari to decimal = %d", ans);
    return 0;
}
int convert(int n1)
{
    int i = 0, deci = 0, rem;
    while (n1 != 0)
    {
        rem = n1 % 10;
        deci += rem * pow(2, i);
        n1 /= 10;
        ++i;
    }

    return deci;
}