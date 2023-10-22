#include <stdio.h>
int main()
{
    int i, ans = 0, rev, num;

    printf("Enter a num : ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        rev = num % 10;
        ans = ans * 10 + rev;
        num /= 10;
    }
    printf("%d", ans);

    return 0;
}