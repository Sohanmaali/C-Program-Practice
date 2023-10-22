/**
 * C program to find power of any number using for loop
 */

#include <stdio.h>

int main()
{
    int base, num;
    long int power = 1;
    int i;

    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter num: ");
    scanf("%d", &num);

    /* Multiply base, num times*/
    for (i = 1; i <= num; i++)
    {
        power = power * base;
    }

    printf("%d ^ %d = %d", base, num, power);

    return 0;
}