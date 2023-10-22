#include <stdio.h>
#define max_size 1000
int main()
{
    int n1, i, fect = 1;
    printf("Enter num : ");
    scanf("%d", &n1);
    for (i = 1; i <= n1; i++)
    {
        fect *= i;
    }
    printf("%d", fect);
    return 0;
}