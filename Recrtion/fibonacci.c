

// Write a C program to generate nth Fibonacci term using recursion.
#include <stdio.h>
int fibonacci(int);

int main()
{
    int num, x;
    printf("Enter terms : ");
    scanf("%d", &num);
    printf("Fibonacci serice : ");
    for (int i = 1; i <= num; i++)
    {
        x = fibonacci(i);
        printf("%d ", x);
    }

    return 0;
}
int fibonacci(int n)
{
    if (n <= 2)
    {
        return 1;
    }
    int ans1 = fibonacci(n - 1);
    int ans2 = fibonacci(n - 2);
    int ans = ans1 + ans2;
    // printf("%d ", ans);
    return ans;
}
