#include <stdio.h>
#define max_size 1000
int main()
{
    int n1, rev = 0, rem, temp;
    printf("Enter a num : ");
    scanf("%d", &n1);
    temp = n1;
    while (n1 != 0)
    {
        rem = n1 % 10;
        rev = rev * 10 + rem;
        n1 /= 10;
    }
    printf("%d\n", rev);
    if (temp == rev)
    {
        printf("Palindrome num");
    }
    else
    {
        printf("not Palindrome num");
    }

    return 0;
}