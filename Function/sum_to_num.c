#include <stdio.h>
int add(int, int);
int main()
{
    int num1, num2, sum;
    printf("Enter two num : ");

    scanf("%d %d", &num1, &num2);
    sum = add(num1, num2);

    printf("Sum = %d", sum);
    return 0;
}
int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}