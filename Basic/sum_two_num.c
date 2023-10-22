#include <stdio.h>
int main()
{
    int a, b, sum;
    printf("Enter your first num = ");
    scanf("%d", &a);
    printf("Enter your second num = ");
    scanf("%d", &b);
    sum = a + b;
    printf("sum of %d + %d = %d", a, b, sum);
    return 0;
}