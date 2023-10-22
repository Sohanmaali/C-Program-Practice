#include <stdio.h>
int sum_digit(int);
int main()
{
    int n;
    printf("Enter a num : ");
    scanf("%d", &n);
    printf("%d", sum_digit(n));
    return 0;
}
int sum_digit(int a)
{
    int ans = 0;
    if (a <= 0)
    {
        return 0;
    }
    else
    {

        ans += (a % 10) + sum_digit(a / 10);
    }
    return ans;
}