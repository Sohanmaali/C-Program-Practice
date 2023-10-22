#include <stdio.h>
#define max_size 1000
int main()
{
    int n1, i = 1, rem, oct = 0;

    printf("Enter a num : ");
    scanf("%d", &n1);

    while (n1 != 0)
    {
        rem = n1 % 8;
        oct += rem * i;

        i *=  10;
        n1 /= 8;
    }

    printf("%d", oct);

    return 0;
}