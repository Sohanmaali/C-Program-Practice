#include <stdio.h>
int prime(int, int);
int main()
{
    int n, temp;

    printf("Enter a num : ");
    scanf("%d", &n);

    temp = prime(n, n / 2);

    if (temp == 1)
    {

        printf("prime");
    }
    else
    {
        printf("not prime");
    }

    return 0;
}
int prime(int a, int b)
{
     
    if (a == 1 || b == 1)
    {
        return 1;
    }
    else
    {
        if (a % b == 0)
        {

            return 0;
        }
        else
        {
            return prime(a, b - 1);
        }
    }
}