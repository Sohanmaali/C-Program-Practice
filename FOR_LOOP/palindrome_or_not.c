#include <stdio.h>
int main()
{
    int i, num, pali, rev, sum = 0;

    printf("Enter a num : ");
    scanf("%d", &num);
    pali = num;
    while (num != 0)
    {
        rev = num % 10;
        sum = sum * 10 + rev;
        num /= 10;
    }
    if (sum == pali)
    {
        printf("%d is a palindrome number.", pali);
    }
    else
    {
        printf("%d is not a palindrome number.", pali);
    }

    return 0;
}