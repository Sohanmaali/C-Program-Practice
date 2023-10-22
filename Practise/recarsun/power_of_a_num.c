#include <stdio.h>
#include <math.h>

int power(int, int);
int main()
{
    int n, m;

    printf("Enter a num : ");
    scanf("%d %d", &n, &m);

    printf("%d ", power(n, m));

    return 0;
}
int power(int a, int b)
{
    int ans;
    if (a == 1 || b == 1)
    {
        return a;
    }
    else
    {

        return ans = a * power(a, b - 1);
    }
}