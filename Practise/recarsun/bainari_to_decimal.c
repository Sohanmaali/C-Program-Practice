#include <stdio.h>
#include <math.h>

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
    int i = 0;
    if (a == 1)
    {
        return a;
    }
    else
    {
        i++;
        return (a % 10) + pow(2, i) * convert(a / 10);
    }
}