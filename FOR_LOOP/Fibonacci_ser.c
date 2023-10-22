#include <stdio.h>
int main()
{
    int i, num, a, b, sum;
    printf("Enter a num : ");
    scanf("%d", &num);
    a = 0;
    b = 1;
    sum = 0;
    for (i = 1; i <= num; i++)
    {
        printf("%d, ", sum);
        a = b;
        b = sum;
        sum = a + b;
    }
    return 0;
}