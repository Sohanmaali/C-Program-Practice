#include <stdio.h>
int count_di(int);
int main()
{
    int n;
    printf("Enter a num : ");
    scanf("%d", &n);
    printf("%d", count_di(n));
    return 0;
}
int count_di(int a)
{
    int ans = 0;
    if (a <= 9)
    {
        return 1;
    }
    else
    {
        ans += 1;
        ans += count_di(a / 10);
    }
    return ans;
}