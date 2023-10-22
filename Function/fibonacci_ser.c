#include <stdio.h>
int fibonacci(int n)
{
    int a = 0, b = 1, fib = 0;

    for (int i = 0; i <= n; i++)
    {
        printf("%d ", fib);
        fib = a + b;
        a = b;
        b = fib;
    }
    return fib;
}
int main()
{
    int num, fibb;
    printf("Enter a num : ");
    scanf("%d", &num);
    fibonacci(num);
    //  printf("%d ", fibb);
    return 0;
}