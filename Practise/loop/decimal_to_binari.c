#include <stdio.h>
#include <math.h>
#define max_size 1000
int main()
{
    int n1, i = 1, rem, bi = 0;

    printf("Enter a num : ");
    scanf("%d", &n1);
    while (n1 != 0)
    {
        rem = n1 % 2;
        bi = bi + rem * i;
        i = i * 10;
        n1 = n1 / 2;
    }
    printf("%d", bi);
    return 0;
}