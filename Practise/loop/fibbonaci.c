#include <stdio.h>
#define max_size 1000
int main()
{
    int n1, a = 0, b = 1, sum = 0;

    printf("Enter three n1 num : ");
    scanf("%d", &n1);
    for (int i = 1; i <= n1; i++)
    {
        printf("%d ", sum);
        a = b;
        b = sum;
        sum = a + b;
    }

    return 0;
}