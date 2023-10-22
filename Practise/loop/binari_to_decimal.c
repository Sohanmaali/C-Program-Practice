#include <stdio.h>
#include <math.h>

int main()
{
    int n1, i = 0, rem, deci = 0;

    printf("Enter a num : ");
    scanf("%d", &n1);

    while (n1 != 0)
    {
        rem = n1 % 10;
        deci += rem * pow(2, i);

        n1 /= 10;
        i++;
    }
    printf("%d", deci);

    return 0;
}