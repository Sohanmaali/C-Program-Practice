#include <stdio.h>
#include <math.h>

int main()
{
    int n, i = 0, rem, hex = 0;

    printf("Enter a num : ");
    scanf("%d", &n);

    while (n != 0)
    {
        rem = n % 16;
        hex += rem * pow(10, i);
        i++;
        n /= 16;
    }
 
    printf("%X", hex);

    return 0;
}