#include <stdio.h>
int main()
{
    int num, rev=0, rem = 0;
    printf("Enter a three digit num : ");
    scanf("%d", &num);

    rem = num % 10;
    rev = rev * 10 + rem;
    num /= 10;

    rem = num % 10;
    rev = rev * 10 + rem;
    num /= 10;

    rem = num % 10;
    rev = rev * 10 + rem;
    num /= 10;
    printf("Reverse num = %d", rev);
    return 0;
}