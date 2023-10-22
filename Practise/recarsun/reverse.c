#include <stdio.h>
#include <math.h>

int reverse(int);
int main()
{
    int n;

    printf("Enter a num : ");
    scanf("%d", &n);

    printf("%d ", reverse(n));

    return 0;
}
int reverse(int a)
{
    static int ans = 0, rem;
    if (a > 0)
    {
        ans = ans * 10 + (a % 10);
        reverse(a / 10);
    }
    return ans;
}