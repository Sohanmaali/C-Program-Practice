#include <stdio.h>
int gcd(int, int);
int main()
{
    int n, n1;

    printf("Enter a num : ");
    scanf("%d %d", &n, &n1);

    printf("%d", gcd(n, n1));
    printf("\n%d", (n * n1) / gcd(n, n1));
    return 0;
}
int gcd(int a, int b)
{
    int ans = 0;
    if (a == b)
    {
        return a;
    }
    if (a > b)
    {
        ans = gcd(a - b, b);
    }
    else
    {

        ans = gcd(a, b - a);
    }
    // ans = gcd(a, b);
    return ans;
}