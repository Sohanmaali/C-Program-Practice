#include <stdio.h>
#include <math.h>

int arms(int);
int parfect(int);

int main()
{
    int n1, ans, i;

    printf("Enter a num : ");
    scanf("%d", &n1);
    printf("ansstron num = ");
    for (i = 1; i <= n1; i++)
    {
        ans = arms(i);

        if (ans == i)
        {
            printf("%d, ", ans);
        }
    }
    printf("\nParfect num = ");
    for (i = 1; i <= n1; i++)
    {
        ans = parfect(i);
        if (ans == i)
        {
            printf("%d, ", ans);
        }
    }
    return 0;
}
int arms(int n)
{
    int count = 0, rem, sum = 0, temp;
    temp = n;
    while (temp != 0)
    {
        rem = temp % 10;
        count++;
        temp /= 10;
    }

    temp = n;
    while (temp != 0)
    {
        rem = temp % 10;
        sum += pow(rem, count);
        temp /= 10;
    }

    return sum;
}
int parfect(int n)
{
    int sum = 0, rem, i;
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    return sum;
}