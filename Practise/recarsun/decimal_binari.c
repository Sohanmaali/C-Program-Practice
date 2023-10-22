#include <stdio.h>
int convert(int);
int main()
{
    int n;
    printf("Enter a num : ");
    scanf("%d", &n);
    printf("%d", convert(n));
    return 0;
}
int convert(int a)
{
    int ans = 0;
    if (a <= 1)
    {
        return a;
    }
    else
    {

        ans += (a % 2) + 10 * convert(a / 2);
    }
    return ans;
}