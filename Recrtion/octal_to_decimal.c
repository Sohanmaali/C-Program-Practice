#include <stdio.h>
#include <math.h>

int i = 0, ans = 0, rem;
int convert(int);
int main()
{
    int num;
    printf("Enter a num : ");
    scanf("%d", &num);
    printf("bainari to decimal = %d", convert(num));
    return 0;
}
int convert(int n)
{
    if (n > 0)
    {
        rem = n % 10;
        ans += rem * pow(8, i);
        i++;
        convert(n / 10);
    }
    return ans;
}