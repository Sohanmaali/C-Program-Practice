#include <stdio.h>
int main()
{
    int num, rem, prod = 1;
    printf("Enter a num : ");
    scanf("%d", &num);
    while (num > 0)
    {
        rem = num % 10;
        prod *= rem;
        num /= 10;
    }

    printf("product of given nums digit = %d", prod);
    return 0;
}