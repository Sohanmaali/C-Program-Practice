#include <stdio.h>
#include <math.h>

int count_di(int);

int main()
{
    int n1, ans, i;

    printf("Enter a num : ");
    scanf("%d", &n1);

    ans = count_di(n1);

    printf("%d", ans);

    return 0;
}
int count_di(int a)
{
    static int sum = 0;
    if (a <= 0)
    {
        return a;
    }
    else
    {
        sum++;
        count_di(a /= 10);
    }
    return sum;
}